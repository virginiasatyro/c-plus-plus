#include <iostream>
#include <string>
#include <set>

// Vamos colocar junto do main por simplicidade
class Pessoa {
private:
    const std::string _nome;
    const int _idade;

public:
  // Construtor com lista de inicializa��o
    Pessoa(std::string nome, int idade):_nome(nome), _idade(idade){}

    std::string get_nome() const{
        return this->_nome;
    }

    int get_idade() const {
        return this->_idade;
    }
};

// O comparator sempre verificar se � <. Com < podemos criar >, == e !=:
// Note que:
//           p1 < p2   <--> p2 > p1
//           p1 >= p2  <--> !(p1 < p2)
//           p1 == p2  <--> !(p1 < p2) && !(p2 < p1)
//           p1 != p2  <--> !(p1 == p2)
struct compara_pessoa_f{
    bool operator()(const Pessoa& p1, const Pessoa& p2){
        return p1.get_idade() < p2.get_idade();
    }
};

int main() {
    std::set<Pessoa, compara_pessoa_f> pessoas;
    pessoas.insert(Pessoa("Ana", 18));
    pessoas.insert(Pessoa("Pedro", 19));
    pessoas.insert(Pessoa("Ana", 18));

    for(Pessoa p : pessoas){
        std::cout << p.get_nome() << std::endl;
    }

    return 0;
}
