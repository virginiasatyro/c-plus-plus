#include <iostream>

struct ponto_t{
    float x;
    float y;
};

void translacao(ponto_t &ponto, float dx, float dy){ // passando a copia
    ponto.x += dx;
    ponto.y += dy;
}

int main(){
    ponto_t ponto_a;
    ponto_a.x = 7;
    ponto_a.y = 9;

    std::cout << ponto_a.x << std::endl;
    std::cout << ponto_a.y << std::endl;

    translacao(ponto_a, 3, 1);
    std::cout << ponto_a.x << std::endl;
    std::cout << ponto_a.y << std::endl;

    return 0;
}
