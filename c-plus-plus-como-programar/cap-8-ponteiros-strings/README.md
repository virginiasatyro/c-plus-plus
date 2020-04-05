# C++ Como Programar 

## Caítulo 8 - Ponteiros e strings baseadas em ponteiros

### Ponteiros

Variáveis ponteiro contêm endereços de memória como seus valores. Um ponteiro contém o endereço de memória de uma variável que. por sua vez, contém um valor específico.
Nesse sentido, o nome de uma variável __referencia um valor diretamente__ e um ponteiro __referencia um valor indiretamente__. 

```
int *countPtr, count;

double *xPtr, *yPtr; // ponteiros para double

int y = 5; // declara variável y
int *yPtr; // declara variável ponteiro yPtr
yPtr = &y; // atribui o endereço de y a yPtr
```

#### Passando Argumentos Para Funções

Há três maneiras de passar argumentos para uma função - passagem por valor, passagem por referência com argumentos de referência e passagem por referência com argumentos de ponteiro. 

```
cubo_passagem_valor.cpp

cubo_passagem_referencia.cpp
```

#### Relacionamento Entre Ponteiros e Arrays 

```
int b[5]; // cria array int b de 5 elementos
int *bPtr; // cria ponteiro int bPtr 

bPtr = b; // atribui o endereço do array b ao bPtr 

bPtr = &b[0]; // também atribui o endereço do array b ao bPtr 
```