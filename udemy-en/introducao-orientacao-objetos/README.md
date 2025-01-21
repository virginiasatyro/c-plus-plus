# Udemy

## C++: Orientação a Objetos - Introdução 

### 1) Classes e Objetos 

#### Classes / Objetos 

C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

##### Create a Class

```
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```

##### Create an Object 

```
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
```

#### ```public```

Nível de acesso livre. Indica que o método ou atributo da classe é público, ou seja, pode-se acessar este atributo, ou executar esse método, por qualquer código de programa. 

#### ```private```

Nível mais protegido. Mebros declarados como private,só podem ser acessados dentro da classe em que foram declarados. 

### 2) Encapsulamento

#### Classes

Modelos para a criação de objetos.

#### Métodos

Rotinas que acessam os dados da classe.

#### Atributos 

Dados dos objetos.

#### Objetos 

Instâncias de uma classe.

### 3) Arquivos de Cabeçalho

- arquivo .h .cpp 

### 4) Construtores e Destrutores 

#### Construtores

Quando um objeto de uma classe é criado, seus membros podem ser inicializados através de um método construtor. Tais métodos, quando definidos, devem possuir o mesmo nome da classe.

Construtores servem para inicializar dados de um objeto. Uma classe também pode ter vários construtores diferentes implementados. Além disso, eles só podem ser chamados usando o comando new ou na declaração de um objeto de uma certa classe.
```
CPessoa P1;
CPessoa *P2;
P2 = new CPessoa();  // tanto um como o outro
P2 = new CPessoa;    // estão corretos e funcionam
```
Caso a classe não define um construtor, então o compilador define um construtor default sem parâmetros. Assim, ao declarar um objeto, não se coloca parênteses após o nome do mesmo.

No momento que um construtor é definido, o compilador não define mais um construtor default, exigindo do desenvolvedor a declaração deste.
```
class CPessoa
{
  string nome;
public:
  CPessoa();    // construtor default definido pelo usuário
  CPessoa(string n);
};
```

#### Destrutores 

O destrutor é chamado quando um objeto deixa de existir (caso esta não seja dinâmica). Ele deve ser chamado após todos os comandos da rotina, por intermédio do comando ```delete```.
```
delete C2;
delete C3[];
```
O destrutor não tem parâmetros e não tem tipo de retorno. Sua declaração na assinatura da classe é feita da seguinte forma:
```
class CPessoa
{
  CPessoa();   // construtora
  ~CPessoa();  // destrutora - Mesmo nome da classe, precedido do caractere ~ (til)
}
```

Apenas pode existir um destrutor por classe. Sua implementação no arquivo CPP é assim descrita:
```
CPessoa::~CPessoa()
{
  // chamada quando delete é utilizado
}
```

### 5) Atributo Static

We can define class members static using static keyword. When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

A static member is shared by all objects of the class. All static data is initialized to zero when the first object is created, if no other initialization is present. We can't put it in the class definition but it can be initialized outside the class as done in the following example by redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.

Existem outros usos para o ```static``` que devem ser aprofundados futuramente. 