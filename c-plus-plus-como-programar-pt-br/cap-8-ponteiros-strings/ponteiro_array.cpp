/***********************************************************************************
 * File: ponteiro_array.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Utilizando notações de subscrito e de ponteiro com arrays.
***********************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int b[] = {10, 20, 30, 40};
    int *bPtr = b; // configura bPtr para apontar para o array b 

    // gera saída do array b utilizando notação de subscrito de array
    cout << "Array b printed with: \n\nArray subscript notation\n";

    for(int i = 0; i < 4; i++)
        cout << "b[" << i << "] = " << b[i] << '\n';

    // gera saída do array b utilizando a notação de nome de array e a de ponteiro/deslocamento
    cout << "\nPointer/offset notation where "
        << "the pointer is the array name\n";

    for(int offset1 = 0; offset1 < 4; offset1++)
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';

    // gera saída do array b utilizando bPtr e notação de subscrito de array
    cout << "\nPointer subscript notation\n";

    for(int j = 0; j < 4; j++)
        cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';

    cout << "\nPonter/offset notation\n";

    // gera saída do array b utilizando bPtr e notação de ponteiro/deslocamento
    for(int offset2 = 0; offset2 < 4; offset2++)
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << '\n';

    return 0;
}

/*
Array b printed with: 

Array subscript notation
b[0] = 10
b[1] = 20
b[2] = 30
b[3] = 40

Pointer/offset notation where the pointer is the array name
*(b + 0) = 10
*(b + 1) = 20
*(b + 2) = 30
*(b + 3) = 40

Pointer subscript notation
bPtr[0] = 10
bPtr[1] = 20
bPtr[2] = 30
bPtr[3] = 40

Ponter/offset notation
*(bPtr + 0) = 10
*(bPtr + 1) = 20
*(bPtr + 2) = 30
*(bPtr + 3) = 40

*/