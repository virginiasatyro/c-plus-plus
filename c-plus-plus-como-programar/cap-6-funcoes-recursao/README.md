# C++ Como Programar 

## Caítulo 6 - Funções e uma Introdução à Recursão

### Classes de Armazenamento

A classe de armazenamento de um identificador determina o
período em que esse identificador existe na memória. 

- Classe de armazenamento automática: auto, register; 

- Classe de armazenamento estática

Dica: o armazenamento automático é um meio de economizar 
memória, porque as variáveis de classe de armazenamento 
automático só existem na memória quando o bloco em que são 
definidas estiver executando. 

#### auto 

Deduz o tipo de uma variável declarada da expressão de 
inicialização.

A palavra-chave auto direciona o compilador para usar a 
expressão de inicialização de uma variável declarada, ou
parâmetro de expressão lambda, para deduzir seu tipo.

Recomendamos que você use a palavra-chave auto para a 
maioria das situações, a menos que você realmente queira
uma conversão — porque ela fornece estes benefícios:

- Robustez: Se o tipo da expressão for alterado — isso 
incluirá quando um tipo de retorno de função for alterado 
— ele simplesmente funcionará.

- Desempenho: Você tem a garantia de que não haverá nenhuma
conversão.

- Usabilidade: Você não precisa se preocupar com as
dificuldades e erros de ortografia do nome do tipo.

- Eficiência: Sua codificação pode ser mais eficiente.

Casos de conversão nos quais você talvez não queira usar auto:

- Quando você desejar um tipo específico e nada mais 
serve.

- Tipos de auxiliares de modelo de expressão — por 
exemplo, (valarray+valarray).

A palavra-chave auto é uma maneira simples de declarar uma
variável que tem um tipo complicado. Por exemplo, você 
pode usar auto para declarar uma variável em que a expressão
de inicialização envolve modelos, ponteiros para funções 
ou ponteiros para membros.

Você também pode usar auto para declarar e inicializar uma
variável para uma expressão lambda. Você não pode declarar 
o tipo da variável você mesmo pois o tipo de uma expressão
lambda é conhecido apenas pelo compilador.

```
#include <iostream>

using namespace std;

int main( )
{
    int count = 10;
    int& countRef = count;
    auto myAuto = countRef;

    countRef = 11;
    cout << count << " ";

    myAuto = 12;
    cout << count << endl;
}
```

No exemplo anterior, myauto é um int, não uma referência 
```int```, portanto, a saída é ```11 11```, não ```11 12``` como seria o 
caso se o qualificador de referência não tivesse sido 
descartado por auto.

```
#include <initializer_list>

int main()
{
    // std::initializer_list<int>
    auto A = { 1, 2 };

    // std::initializer_list<int>
    auto B = { 3 };

    // int
    auto C{ 4 };

    // C3535: cannot deduce type for 'auto' from initializer list'
    auto D = { 5, 6.7 };

    // C3518 in a direct-list-initialization context the type for 'auto'
    // can only be deduced from a single initializer expression
    auto E{ 8, 9 };

    return 0;
}
```

As declarações a seguir são equivalentes. Na primeira instrução,
a variável j é declarada como sendo do tipo ```int```. Na segunda 
instrução, a variável k é deduzida para ser do tipo int porque 
a expressão de inicialização (0) é um número inteiro.

```
int j = 0;  // Variable j is explicitly type int.
auto k = 0; // Variable k is implicitly type int because 0 is an integer.
```
As seguintes declarações são equivalentes, mas a segunda 
declaração é mais simples do que a primeira. Um dos motivos
mais atraentes para usar a palavra-chave auto é a simplicidade.

```
map<int,list<string>>::iterator i = m.begin();
auto i = m.begin();
```

O fragmento de código a seguir usa a nova declaração de operador e 
ponteiro para declarar ponteiros.

```
double x = 12.34;
auto *y = new auto(x), **z = new auto(&x);
```

```
auto x = 1, *y = &x, **z = &y; // Resolves to int.
auto a(2.01), *b (&a);         // Resolves to double.
auto c = 'a', *d(&c);          // Resolves to char.
auto m = 1, &n = m;            // Resolves to int.
```

https://docs.microsoft.com/pt-br/cpp/cpp/auto-cpp?view=vs-2019


#### register 

O compilador do Microsoft C/C++ não honra as solicitações
de variáveis de registro feitas pelo usuário. No entanto,
para fins de portabilidade, qualquer outra semântica associada
à palavra-chave register é honrada pelo compilador. Por exemplo,
você não pode aplicar o operador unário address-of (&) a 
um objeto registro e a palavra-chave register não pode ser 
usada em matrizes.

https://docs.microsoft.com/pt-br/cpp/c-language/register-storage-class-specifier?view=vs-2019

#### extern 

A palavra-chave extern pode ser aplicada a uma variável global, uma 
função ou uma declaração de modelo. Ele especifica que o símbolo tem 
vínculo externo. Para obter informações básicas sobre vinculação e 
por que o uso de variáveis globais não é recomendado, consulte unidades 
de tradução e vinculação.

A palavra-chave extern tem quatro significados dependendo do contexto:

- Em uma declaração de variável global não const , extern especifica 
que a variável ou função é definida em outra unidade de tradução. 
O extern deve ser aplicado em todos os arquivos, exceto aquele em que 
a variável é definida.

- Em uma declaração de variável const , ele especifica que a variável
tem vínculo externo. O extern deve ser aplicado a todas as declarações 
em todos os arquivos. (As variáveis de const global têm vínculo interno 
por padrão.)

- extern "C" especifica que a função é definida em outro lugar e usa 
a Convenção de chamada de linguagem C. O modificador "C" extern 
também pode ser aplicado a várias declarações de função em um bloco.

- Em uma declaração de modelo, extern especifica que o modelo já foi 
instanciado em outro lugar. extern informa ao compilador que ele pode 
reutilizar a outra instanciação, em vez de criar uma nova no local atual. 
Para obter mais informações sobre esse uso de extern , consulte 
instanciação explícita.

```
//fileA.cpp
int i = 42; // declaration and definition

//fileB.cpp
extern int i;  // declaration only. same as i in FileA

//fileC.cpp
extern int i;  // declaration only. same as i in FileA

//fileD.cpp
int i = 43; // LNK2005! 'i' already has a definition.
extern int i = 43; // same error (extern is ignored on definitions)
```

```
//fileA.cpp
extern const int i = 42; // extern const definition

//fileB.cpp
extern const int i;  // declaration only. same as i in FileA
```

https://docs.microsoft.com/pt-br/cpp/cpp/extern-cpp?view=vs-2019

#### mutable 

This keyword can only be applied to non-static and non-const data 
members of a class. If a data member is declared mutable, then it 
is legal to assign a value to this data member from a const member 
function.

For example, the following code will compile without error because 
```m_accessCount``` has been declared to be mutable, and therefore can be 
modified by ```GetFlag``` even though ```GetFlag``` is a const member function.

```
// mutable.cpp
class X
{
public:
   bool GetFlag() const
   {
      m_accessCount++;
      return m_flag;
   }
private:
   bool m_flag;
   mutable int m_accessCount;
};

int main()
{
}
```

#### static 

As classes podem conter dados estáticos de membros e funções de membros.
Quando um membro de dados é declarado como estático, apenas uma cópia dos
dados é mantida para todos os objetos da classe.

Os membros de dados estáticos não fazem parte dos objetos de um determinado
tipo de classe. Como resultado, a declaração de um membro de dados estáticos
não é considerada uma definição. O membro de dados é declarado no escopo da 
classe, mas a definição é realizada no escopo do arquivo. Esses membros 
estáticos têm vinculação externa.

