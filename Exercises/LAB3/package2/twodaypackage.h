#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "package.h"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(unsigned int, unsigned int, unsigned int, const std::string &, const std::string &);
    virtual double calculate_cost() const;
    void set_taxa(unsigned int);
    unsigned int get_taxa() const;
    ~TwoDayPackage();

private:
    unsigned int taxa_fixa;
};

#endif // TWODAYPACKAGE_H
