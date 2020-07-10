// Operadores de inserção de fluxo e de extração de fluxo sobrecarregados para a classe PhoneNumber
#include <iomanip>

#include "phoneNumber.h"

using namespace std;

/* operador de inserção de fluxo sobrecarregado;
não pode ser uma função-membro se quiséssemos invocá-lo com 
cout << somePhoneNumber; */
ostream &operator << (ostream &output, const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") " << number.exchange << "-" << number.line;
    return output; // permite cout << a << b << c
}

/* operador de extração de fluxo sobrecarregado;
não pode ser uma função-membro se quiséssemos invocá-lo com 
cin >> somePhoneNumber; */
istream &operator >> (istream &input, PhoneNumber &number)
{
    input.ignore(); // pula (
    input >> setw(3) >> number.areaCode;
    input.ignore(2); // pula ) e espaço
    input >> setw(3) >> number.exchange; 
    input.ignore();
    input >> setw(4) >> number.line; 
    return input; // permite cin >> a >> b >> c;
}