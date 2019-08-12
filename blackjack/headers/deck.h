#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
#include <string>
using namespace std;

class Deck
{
	private:   
		static vector<Card> playingCard; 
		static vector<Card> graveyardCard;  
		static const int MAX_SUITS; 
		static const int MAX_FACE_CARDS; 
		static const int MAX_NUM_CARDS;  
		
		static const char suits[];
		static const string faceCards[];
		static const string numCards[];
	public:
		//constructors
		Deck(); 
		Deck(int numDecks);
		
		//functions 
		static void InitNumDecks(int numDecks);
		static void PrintDeck();
		static void PrintGraveyard();
		static int NumDeckCards();
		static int NumGraveyardCards();
		static void ShuffleDeck();
		
	protected:
	
	
};


#endif