/***********************************************************************************
 * File: DeckOfCards.h
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Definição da classe DeckOfCards que representa um baralho. 
***********************************************************************************/

class DeckOfCards
{
private:
    int deck[4][13]; // representa as cartas do baralho
public:
    DeckOfCards(); // construtor que inicializa deck 
    void shuffle(); // embaralha as cartas do baralho
    void deal(); // distribui as cartas do baralho
};

