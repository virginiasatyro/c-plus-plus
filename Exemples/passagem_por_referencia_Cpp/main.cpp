#include <iostream>

int inc(int &x){
    x++;
    return x;
}

int main(){
    int a = 10;

    int b = inc(a);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;

    return 0;
}
