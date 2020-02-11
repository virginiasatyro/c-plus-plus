#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H

#include <string>

class Data {
private:
     int _dia;
     int _mes;
     int _ano;
public:
    Data(int dia,int mes,int ano);
    int get_dia();
    int get_mes();
    int get_ano();
    std::string get_data_curto();
    std::string get_data_longo();
};

#endif
