/***********************************************************************************
 * File: time.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Declaração da classe Time. Funções membro são definidas em Time.cpp.
***********************************************************************************/
#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hour; // 0 - 23 
    int minute; // 0 - 59
    int second; // 0 - 59

public:
    Time(int = 0, int = 0, int = 0); // constructor-padrão

    // funções set 
    void setTime(int, int, int); // configura hora, minuto e segundo
    void setHour(int); // configura hora - depois da validação
    void setMinute(int); 
    void setSecond(int);

    // funções get
    int getHour(); // retorna hour 
    int getMinute();
    int getSecond(); 

    void printUniversal(); // imprime a hora no formato de data/hora universal 
    void printStandard(); // imprime a hora no formato-padrão de data/hora
};

#endif // TIME_H