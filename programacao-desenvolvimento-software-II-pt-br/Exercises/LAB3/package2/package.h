#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package{
public:
    Package(unsigned int, unsigned int, const std::string &, const std::string &);
    void set_name(const std::string &);
    std::string get_name() const;
    void set_endereco(const std::string &);
    std::string get_endereco() const;
    void set_peso(unsigned int);
    unsigned int get_peso() const;
    void set_custo(unsigned int);
    unsigned int get_custo_por_quilo() const;
    virtual double calculate_cost() const;
    virtual ~Package() = 0;

private:
    unsigned int peso;
    unsigned int custo_por_quilo;
    std::string nome;
    std::string endereco;
};


#endif // PACKAGE_H
