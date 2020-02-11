#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "package.h"

class OverNightPackage : public Package{
public:
    OverNightPackage(unsigned int, unsigned int, unsigned int, const std::string &, const std::string &);
    virtual double calculate_cost() const;
    void set_taxa_peso(unsigned int);
    unsigned int get_taxa_peso() const;
    ~OverNightPackage();

private:
    unsigned int taxa_peso;
};

#endif // OVERNIGHTPACKAGE_H
