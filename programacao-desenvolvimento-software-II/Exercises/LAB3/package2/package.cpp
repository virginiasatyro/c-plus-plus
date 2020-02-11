#include "package.h"

Package::Package(unsigned int xpeso, unsigned int xcusto_por_quilo, const std::string &xnome, const std::string &xendereco) : peso(xpeso), custo_por_quilo(xcusto_por_quilo), nome(xnome), endereco(xendereco){
    set_peso(xpeso);
    set_custo(xcusto_por_quilo);
}

void Package::set_name(const std::string &xnome){
    nome = xnome;
}

std::string Package::get_name() const{
    return nome;
}

void Package::set_endereco(const std::string &xendereco){
    endereco = xendereco;
}

std::string Package::get_endereco() const{
    return endereco;
}

void Package::set_peso(unsigned int xpeso){
    peso = (xpeso < 0.0) ? 0.0 : xpeso;
}

unsigned int Package::get_peso() const{
    return peso;
}

void Package::set_custo(unsigned int xcusto_por_quilo){
    custo_por_quilo = (xcusto_por_quilo < 0.0) ? 0.0 : xcusto_por_quilo;
}

unsigned int Package::get_custo_por_quilo() const{
    return custo_por_quilo;
}

double Package::calculate_cost() const{
    return get_custo_por_quilo() * get_peso();
}

Package::~Package(){

}
