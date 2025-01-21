/***********************************************************************************
 * File: time.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Colocando chamadas de função-membro em cascata.
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
    Time &setTime(int, int, int); // configura hora, minuto e segundo
    Time &setHour(int); // configura hora - depois da validação
    Time &setMinute(int); 
    Time &setSecond(int);

    // funções get (normalmente declaradas como const)
    int getHour() const; // retorna hour 
    int getMinute() const;
    int getSecond() const; 

    // funções print (normalmente declaradas const)
    void printUniversal() const; // imprime a hora no formato de data/hora universal 
    void printStandard() const; // imprime a hora no formato-padrão de data/hora
};

#endif // TIME_H