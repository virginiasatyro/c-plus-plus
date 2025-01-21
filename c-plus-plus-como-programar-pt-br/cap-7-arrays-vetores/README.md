# C++ Como Programar 

## Caítulo 7 - Arrays e Vetores

### Arrays 

Um array é um grupo consecutivo de posições da memória em que todas elas são
do mesmo tipo. 

```
int c[12]; // c é um array de 12 inteiros

int n[10] = {0}; // inicializa elementos do array n como 0

int n[] = {1, 2, 3, 4, 5};```

Arrays podem ser de quaisquer tipos, por exemplo: caracteres. Uma ```string```
como 'hello' é na realidade um array de caracteres. Embora objetos ```string``` 
sejam convenientes para utilizar e reduzir o potencial de error, arrays de 
caracteres que representam ```strings``` têm vários recursos únicos. 

```
char string1[] = "first";

char string1[] = {'f', 'i', 'r', 's', 't', '\0'};

char string2[20];

cin >> string2;

cout << string2;```

#### Passando Arrays Para Funções

Para passar um argumento array a uma função, especifique o nome do array sem colchetes.

```
int hourlyTemperatures[24];

modifyArray(hourlyTemperatures, 24);
```

O C++ passa arrays a funções por referência - as funções chamadas podem modificar os valores
dos elementos nos arrays originais dos chamadores. O valor do nome do array é o endereço 
na memória do computador do primeiro elemento do array. Como o endereço inicial do array é
passado, a função chamada sabe precisamente onde o array está armazenado na memória. 

#### Dicas de Desempenho

Passar arrays por referência faz sentido por razões de desempenho. Se os arrays fossem passados
por valor, uma cópia de cada elemento seria passada. Para grandes arrays frequentemente passados, 
isso seria demorado e exigiria armazenamento conseiderávl para as cópias dos elementos do 
array.

__Comiladores C++ ignoram nomes de variáveis em protótipos!__

```
void modifyArray(int [], int);S

void modifyArray(int anyArrayName[], int anyVariableName);
```

### Vector

Template ```vector``` do C++ <i>Standard Library</i> representa um tipo de array mais robusto 
que possui muitas capacidades adicionais. 

Arrays baseados em ponteiros no estilo C têm grande potencial para erros. Por exemplo, dois 
arrays não podem ser significativamente comparados com operadores de igualdade nem com operadores
relacionais. Os nomes de array são simplesmente ponteiros para onde os arrays iniciam na memória,
e, naturalmente, dois arrays sempre estarão em posições de memória diferentes. 

Esse template permite programadores criarem uma alternativa mais poderosa e menos propensa a 
erro para arrays. 