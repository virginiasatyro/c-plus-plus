#include <iostream>

class Ponto{
private:    // só pode ser acessado dentro da classe!
    float _x;   // atributos da classe
    float _y;
public:     // acesso de fora da classe
    Ponto(float x, float y){ // CONSTRUTOR
        _x = x; // define como os atributos serão acessados
        _y = y;
    }

    float get_x(){ // "getters"
        return _x;
    }

    float get_y(){
        return _y;
    }
    void translacao(double dx, double dy){
        _x += dx;
        _y += dy;
    }
};

int main(){

    Ponto ponto(7, 9);
    std::cout << "Valor de x: " << ponto.get_x() << std::endl;
    std::cout << "Valor de y: " << ponto.get_y() << std::endl;

    ponto.translacao(3, 1);
    std::cout << "Valor de x: " << ponto.get_x() << std::endl;
    std::cout << "Valor de y: " << ponto.get_y() << std::endl;

    /**
    Também podemos usar para acessar:
        std::cout << "Valor de x: " << ponto->get_x() << std::endl;
        std::cout << "Valor de y: " << ponto->get_y() << std::endl;

        ponto->translacao(3, 1);
        delete ponto;
    */


    return 0;
}
