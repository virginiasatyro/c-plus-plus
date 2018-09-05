#include <iostream>
#include <vector>


int main(){

    std::vector<int> dados = {0, 7, 8, 1, 3}; // nao funciona em C++98
    for(int i = 0; i < dados.size(); i++){
        std::cout << dados[i];
    }

    for(int x : dados)
        std::cout << x;

    for(int& x : dados)
        x *= 2;

    return 0;
}
