/***********************************************************************************
 * File: escopo.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Exemplo de utilização de escopos.
***********************************************************************************/

#include <iostream>

using namespace std;

void useLocal(void); 
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // variável global

int main()
{
    int x = 5; // variável local para main

    cout << "local x in main outer scope is " << x << endl;

    { // inicia novo escopo
        int x = 7; // oculta x do escopo externo 

        cout << "local x in main inner scope is " << x << endl;
    }

    cout << "local x in main outer scope is " << x << endl;

    useLocal(); // tem variável local de x
    useStaticLocal(); // tem x estático local 
    useGlobal(); // utiliza x global 
    useLocal(); // tem variável local de x
    useStaticLocal(); // tem x estático local 
    useGlobal(); // utiliza x global

    cout << "\nlocal x in main is " << x << endl; 

    return 0;
}

// reinicializa a variável local x durante cada chamada
void useLocal(void)
{
    int x = 25; // inicializada toda vez que useLocal é chamada

    cout << "\nlocal x is " << x << " on entering useLocal." << endl;
    x++;
    cout << "local x is " << x << " on existing useLocal" << endl;
}

// inicializa a variável local x somente na primeira vez 
// que a função é chamada; o valor de x é salvo entre as
// chamadas a essa função.
void useStaticLocal(void)
{
    static int x = 50;
    cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
    x++;
    cout << "local static x is " << x << " on existing useStaticLocal" << endl;
}

void useGlobal(void)
{
    cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is " << x << " on existing useGlobal" << endl;
}

/* OUTPUT:
local x in main outer scope is 5
local x in main inner scope is 7
local x in main outer scope is 5

local x is 25 on entering useLocal.
local x is 26 on existing useLocal

local static x is 50 on entering useStaticLocal
local static x is 51 on existing useStaticLocal

global x is 1 on entering useGlobal
global x is 10 on existing useGlobal

local x is 25 on entering useLocal.
local x is 26 on existing useLocal

local static x is 51 on entering useStaticLocal
local static x is 52 on existing useStaticLocal

global x is 10 on entering useGlobal
global x is 100 on existing useGlobal

local x in main is 5
*/