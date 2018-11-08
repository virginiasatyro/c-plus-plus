#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <sstream>

int main(){

    std::map<std::string,float>contagem;
    std::cout << std::endl;

    std::cout.precision(2);
    std::string palavra;
    std::string linha;
    int aux = 0;

    while (std::getline(std::cin, linha)) {
        if(linha == "sair"){
            break;
        }
        std::istringstream linha_stream(linha);
        while (std::getline(linha_stream, palavra, ' ')) {
            aux++;
            contagem.insert(std::pair<std::string,float>(palavra,1));
            if(contagem.count(palavra) != 0){
                contagem[palavra]++;
            }
        }
    }
    int i;
    std::cout << std::endl;
    for(auto it:contagem){
        std::cout << it.first << " "  << it.second-1 << " " <<  ((it.second-1))/aux << std::endl;
        i++;
    }

    return 0;
}
