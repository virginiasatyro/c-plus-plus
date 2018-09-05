#include <iostream>
#include <string>

using namespace std;

int main(){
    std::string hello("Ola mundo!\n ");
    std::string pds2("Vamos iniciar PDS2\n");
    std::cout << hello;
    std::cout << std::endl;
    std::cout << pds2;

    std::string maisuma = "Mais uma!";
    std::cout << maisuma.size();
    std::cout << std::endl;

    return 0;
}
