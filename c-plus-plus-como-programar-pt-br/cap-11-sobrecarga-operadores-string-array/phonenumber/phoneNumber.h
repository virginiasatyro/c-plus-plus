// definição da classe PhoneNumber
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

using namespace std;

class PhoneNumber
{
    friend ostream &operator << (ostream &, const PhoneNumber &);
    friend istream &operator >> (istream &, PhoneNumber &);

private:
    string areaCode; // código de área - 3 algarismos
    string exchange; // prefixo - 3 algarismos
    string line;     // linha de 4 algarismos
};

#endif // PHONENUMBER_H