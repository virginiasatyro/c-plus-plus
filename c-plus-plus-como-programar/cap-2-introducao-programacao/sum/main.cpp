/***********************************************************************************
 * File: sum/main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on Fevereiro de 2020
 * 
 * Sum of two numbers
***********************************************************************************/

#include <iostream>

int main()
{
    int num1, num2, sum;

    std::cout << "Enter first integer: ";
    std::cin >> num1;

    std::cout << "Enter second integer: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}

/* 
 * +  adição
 * -  subtração 
 * *  multiplicação 
 * /  divisão 
 * %  módulo
 */