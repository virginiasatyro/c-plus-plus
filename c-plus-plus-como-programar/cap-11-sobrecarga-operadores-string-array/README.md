# C++ Como Programar

## Caítulo 11 - Sobrecarga de operadores; objetos string e array

### Sobrecarga de operadores

Esta capítulo mostra como permitir que operadores C++ funcionem como objetos - processo chamado **sobrecarga de operadores**. Exemplo de um operador sobrecarregado construído no C++ é o ```<<```, que é utilizado como operador de inserção de fluxo e como operador de bits de deslocamento para a esquerda.

Utilize a sobrecarga de operadores quando ela torna um programa mais claro do que realizar as mesmas operações com chamadas de função.

| Operadores| que| não podem|ser sobrecarregados|
|------------|-----|-----------|--------------------|
| ```.``` | ```.*``` | ```::``` | ```?:``` |

Quase todos os outros operadores conhecidos podem ser sobrecarregados. Não é possível criar um novo operador, apenas os existentes podem ser sobrecarregados.

Exemplo: ```phoneNumber.cpp```;