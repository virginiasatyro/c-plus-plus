/***********************************************************************************
 * File: main.cpp
 * C++
 * Author: Virgínia Sátyro
 * License: Free - Open Source
 * Created on April 2020 
 * 
 * Programa de embaralhamento e distribuição de cartas.
***********************************************************************************/

#include "DeckOfCards.h"

int main()
{
    DeckOfCards deckOfCards; // cria objeto deckOfCards 

    deckOfCards.shuffle(); // embaralha 
    deckOfCards.deal(); // distribui cartas 

    return 0;
}

/*
Jack of Diamonds         Ace of Heart   
 Nine of Spades          Four of Clubs   
 Five of Heart          Three of Spades  
Eight of Diamonds       Eight of Heart   
Deuce of Spades           Ten of Clubs   
Seven of Spades         Queen of Spades  
  Six of Spades           Ace of Diamonds
 Jack of Clubs            Six of Heart   
  Ten of Heart           Four of Heart   
Eight of Clubs          Seven of Diamonds
 Nine of Clubs          Deuce of Clubs   
Deuce of Diamonds         Ace of Clubs   
 Four of Diamonds         Six of Diamonds
Three of Clubs            Ten of Spades  
Three of Heart          Deuce of Heart   
 King of Spades          Five of Clubs   
Seven of Heart           Jack of Spades  
  Ten of Diamonds        Nine of Heart   
 Five of Diamonds       Three of Diamonds
  Ace of Spades          King of Heart   
  Six of Clubs           Five of Spades  
Seven of Clubs           Jack of Heart   
 Nine of Diamonds       Eight of Spades  
 Four of Spades         Queen of Clubs   
Queen of Heart           King of Diamonds
 King of Clubs          Queen of Diamonds
*/