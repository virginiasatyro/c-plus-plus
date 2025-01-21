#include "overnightpackage.h"

OverNightPackage::OverNightPackage(unsigned int xpeso, unsigned int xcusto, unsigned int xtaxa_peso, const std::string &xnome, const std::string &xendereco) : Package(xpeso, xcusto, xnome, xendereco){
    set_taxa_peso(xtaxa_peso);
}

void OverNightPackage::set_taxa_peso(unsigned int taxa_peso){
    taxa_peso = (taxa_peso < 0.0) ? 0.0 : taxa_peso;
}

unsigned int OverNightPackage::get_taxa_peso() const{
    return taxa_peso;
}

double OverNightPackage::calculate_cost() const{
    return Package::get_peso() * (get_taxa_peso() + Package::get_custo_por_quilo());
}

OverNightPackage::~OverNightPackage(){
   // delete &taxa_peso;
//    Package::~Package();
}
