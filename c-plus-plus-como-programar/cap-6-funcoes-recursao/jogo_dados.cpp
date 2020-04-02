/***********************************************************************************
 * File: jogo_dados.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on 2020 March
 * 
 * Simulação de um jogo de dados craps.
***********************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice();

int main()
{
    // enumeração com constantes que representam o status do jogo
    enum Status { CONTINUE, WON, LOST};  // todas as maiúsculas em constantes

    int myPoint; // pontos se não ganhar ou perder na primeira rolagem
    Status gameStatus; // pode conter CONTINUE, WON, LOST 

    // torna aleatório o gerador de número aleatório utilizando a hora atual 
    srand(time(0));

    int sumOfDice = rollDice(); // primeira rolagem de dados 

    switch(sumOfDice)
    {
        case 7: // ganha com 7 no primeiro lançamento 
        case 11: // ganha com 11 no primeiro lançamento
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sumOfDice; 
            cout << "Point is " << myPoint << endl;
            break;
    }

    while(gameStatus == CONTINUE)
    {
        sumOfDice = rollDice();

        if(sumOfDice == myPoint)
            gameStatus = WON;
        else   
            if(sumOfDice == 7)
                gameStatus = LOST;
    }

    if(gameStatus == WON)
        cout << "Player wins" << endl;
    else 
        cout << "Player loses" << endl;

    return 0;
}

int rollDice()
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;

    int sum = die1 + die2;

    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

    return sum;
}
