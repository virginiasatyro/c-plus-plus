/***********************************************************************************
 * File: time.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro para a classe Time.
***********************************************************************************/

#include <iostream>
#include <iomanip>

#include "time.h"

using namespace std;

// construtor de time
Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

// configura valor de time utilizando a hora universal
// valores inválidos são configurados como zero 
void Time::setTime(int h, int m, int s)
{
    setHour(h); // configura campo private hour
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    hour = (h > 0 && h < 24) ? h : 0; // valida horas 
}

void Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0; // valida minutos
}

void Time::setSecond(int s)
{
    second = (s >= 0 && s < 60) ? s : 0; // valida segundos
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
} 

// imprime hora no formato de data/hora universal (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
}

// imprime a hora no formato-padrão de data/hora (HH:MM:SS AM ou PM)
void Time::printStandard()
{
    cout << ((hour == 0) || (hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
}