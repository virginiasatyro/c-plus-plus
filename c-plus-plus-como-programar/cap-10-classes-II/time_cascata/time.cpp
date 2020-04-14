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

// configura valores de hour, minute e second
Time &Time::setTime(int h, int m, int s)
{
    setHour(h); // configura campo private hour
    setMinute(m);
    setSecond(s);
    return *this; // permite cascateamento
}

// configura valor de hour
Time &Time::setHour(int h)
{
    hour = (h > 0 && h < 24) ? h : 0; // valida horas 
    return *this; // permite cascateamento
}

// configura valor de minute
Time &Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0; // valida minutos
    return *this;
}

// configura valor de second
Time &Time::setSecond(int s)
{
    second = (s >= 0 && s < 60) ? s : 0; // valida segundos
    return *this;
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
void Time::printStandard() const
{
    cout << ((hour == 0) || (hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
}