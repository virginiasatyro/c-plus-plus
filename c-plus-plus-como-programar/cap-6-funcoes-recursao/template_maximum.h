/***********************************************************************************
 * File: template_maximum.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 April
 * 
 * Definição do template de função maximum.
***********************************************************************************/

template <class T> // ou template < typename T>

T maximum(T value1, T value2, T value3)
{
    T maximumValue = value1; // pressupõe que value1 é máximo

    // determina se value 2 é maior que maximumValue
    if(value2 > maximumValue)
        maximumValue = value2;

    // determina se value3 é maior que maximumValue
    if(value3 > maximumValue)
        maximumValue = value3;

    return maximumValue;
}