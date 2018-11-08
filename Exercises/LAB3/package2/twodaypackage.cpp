#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage(unsigned int xpeso, unsigned int xcusto, unsigned int xtaxa_fixa, const std::string &xnome, const std::string &xendereco) : Package(xpeso, xcusto, xnome, xendereco){
    set_taxa(taxa_fixa);
}

void TwoDayPackage::set_taxa(unsigned int xtaxa_fixa){
    taxa_fixa = (xtaxa_fixa < 0.0) ? 0.0 : xtaxa_fixa;
}

unsigned int TwoDayPackage::get_taxa() const{
    return taxa_fixa;
}

double TwoDayPackage::calculate_cost() const{
    return (Package::get_custo_por_quilo() * Package::get_peso()) + get_taxa();
}

TwoDayPackage::~TwoDayPackage(){
    //delete &taxa_fixa;
//    Package::~Package();
}
