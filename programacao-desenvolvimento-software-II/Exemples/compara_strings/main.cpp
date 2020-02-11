#include <iostream>
#include <string>

using namespace std;

int main(){

    std::string hello("Ola mundo!\n");
    std::string hello2("Ola mundo!\n");

    if(hello == hello2){
        std::cout << "c++ faz overload do == para strings!!!\n";
    }
    if(hello.compare(hello2) == 0){
        std::cout << "Strings iguais!\n";
    }

    return 0;
}
