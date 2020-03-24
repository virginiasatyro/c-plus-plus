#include <iostream> 

using namespace std;

struct Pessoa
{
private:
    int idade;
    int numero_sorte;
    
public:
    Pessoa(int idade) // construtor 
    {
        this->idade = idade;
    }

    Pessoa(int idade, int num_sorte) // outro construtor
    {
        this->idade = idade;
        this->numero_sorte = numero_sorte;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    int getIdade()
    {
        return idade;
    }
};

int main()
{
    Pessoa p1(20);
    //Pessoa p2(20, 77);

    cout << p1.getIdade() << endl; // 20

    return 0;
}