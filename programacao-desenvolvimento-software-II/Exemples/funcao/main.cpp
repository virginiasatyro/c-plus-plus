#include <iostream>

int& function1(int& f){ // modifica o valor de x
    f = f + 3;
    return f;
}

int function2(int f){ // nao modifica o valor de x
    f = f + 3;
    return f;
}

int function3(int *f){ // mesmo comportamento da funcao1
    *f = *f + 3;
    return *f;
}

int main(){
    int x = 7;
    int y;

    y = function2(x);

    std::cout << "Input: " << x << std::endl;  // Input: 10
    std::cout << "Output: " << y << std::endl; // Output: 107

    y = function1(x);

    std::cout << "Input: " << x << std::endl;  // Input: 10
    std::cout << "Output: " << y << std::endl; // Output: 10

    x++;
    y--;

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    //y = function3(&x); // exemplo de chamada

    return 0;
}
