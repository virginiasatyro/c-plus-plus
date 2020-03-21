#include <iostream>

using namespace std;

int num_global = 12;

void foo()
{
    int num = 10;
    static int num_static = 1;
    cout << "variável local: " << num << endl;
    cout << "variável global: " << num_global << endl;
    num_static++;
    cout << "variável estática: " << num_static << endl;
}

int main()
{
    foo();
    // variável local: 10
    // variável global: 12
    // variável estática: 2
    
    foo();
    // variável local: 10
    // variável global: 12
    // variável estática: 3

    foo();
    // variável local: 10
    // variável global: 12
    // variável estática: 4

    return 0;
}