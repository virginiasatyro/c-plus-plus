/***********************************************************************************
 * File: DeckOfCards.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definições de função-membro para a classe DeckOfCards que simula o embaralhamento
 * e distribuição de um baralho.
***********************************************************************************/

#include <iostream>
#include <iomanip> 
#include <cstdlib> // rand(), srand()
#include <ctime> // time 

#include "DeckOfCards.h"

using namespace std;

// construtor-padrão - inicializa deck
DeckOfCards::DeckOfCards()
{
    // itera pelas linhas do baralho
    for(int row = 0; row <= 3; row++)
    {
        // itera pelas colunas do baralho para a linha atual
        for(int column = 0; column <= 12; column++)
        {
            deck[row][column] = 0; // inicializa com zero
        }
    }
    srand(time(0)); // semeia gerador de número aleatório
}

// embaralha as cartas do baralho 
void DeckOfCards::shuffle()
{
    int row; // representa naipe da carta
    int column; // representa face da carta 

    // para cada uma das 52 cartas, escolhe um slot aleatoriamente 
    for(int card = 1; card <= 52; card++)
    {
        do // escolhe uma nova localização aleatória até um slot vazio ser encontrado
        {
            row = rand() % 4; // seleciona linha aleatoriamente 
            column = rand() % 13; // seleciona coluna aleatoriamente 
        }while (deck[row][column] != 0);

        // coloca o número de cartas no slot escolhido
        deck[row][column] = card;
    }
}

// distribui as cartas de baralho 
void DeckOfCards::deal()
{
    // inicializa array suit
    static const char *suit[4] = 
        {"Heart", "Diamonds", "Clubs", "Spades"};

    // inicializa o array face
    static const char *face[13] = 
        {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    // para cada um das 52 cartas
    for(int card = 1; card <= 52; card++)
    {
        // itera pelas linhas do baralho
        for(int row = 0; row <= 3; row++)
        {
            // itera pelas colunas de baralho para a linha atual
            for(int column = 0; column <= 12; column++)
            {
                // se o slot contiver a carta atual, exibe a carta
                if(deck[row][column] == card)
                {
                    cout << setw(5) << right << face[column]
                        << " of " << setw(8) << left << suit[row]
                        << (card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}