#include "headers/deck.h"
#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>

using namespace std; 

	const int Deck::MAX_SUITS = 4; 
	const char Deck::suits[MAX_SUITS] = {'H', 'C', 'S', 'D'};
	
	const int Deck::MAX_FACE_CARDS = 4;  
	const string Deck::faceCards[MAX_FACE_CARDS] = {"A", "K", "Q", "J"};
		
	const int Deck::MAX_NUM_CARDS = 9;  
	const string Deck::numCards[MAX_NUM_CARDS] = {"2", "3", "4", "5", "6", "7", "8", "9", "10"};
	
	vector<Card> Deck::graveyardCard;
	vector<Card> Deck::playingCard; 
	 
Deck::Deck(){ 
	int numDecks;  
	
	cout << "Enter # of Decks to use:";
	cin >> numDecks;
	
	
	if (numDecks < 1){
		numDecks = 1;
	}
	
	InitNumDecks(numDecks);
	
	cout << "deck created using " << numDecks << " decks of cards" << endl;
}


Deck::Deck(int numDecks){ 
	cout << "deck created using " << numDecks << " decks of cards" << endl;
	InitNumDecks(numDecks);
}
  
  
void Deck::InitNumDecks(int numDecks){
	
	//clear deck first
	playingCard.clear();
	
	//for each deck
	for(int i = 0; i < numDecks; i++)
	{
		//for each suit
		for (int suitNo = 0; suitNo < MAX_SUITS; suitNo++)
		{
			
			//create cards A-J
			for(int faceCardNo = 0; faceCardNo < MAX_FACE_CARDS; faceCardNo++)
			{ 
				playingCard.push_back(Card(faceCards[faceCardNo], suits[suitNo]));
			}
			
			//create cards 10-2
			for(int cardNo = MAX_NUM_CARDS; cardNo > 0; cardNo--)
			{  
				playingCard.push_back(Card(numCards[cardNo-1], suits[suitNo]));
				 
			}
			
		}
	}
	
	//Shuffle Deck
	ShuffleDeck();
}

void Deck::PrintDeck(){
	
	for(int i = 0; i < playingCard.size(); i++)
	{
		cout << playingCard[i].Rank() << " " << playingCard[i].Suit() << endl;
	}
	
}


void Deck::PrintGraveyard(){
	
	for(int i = 0; i < graveyardCard.size(); i++)
	{
		cout << graveyardCard[i].Rank() << " " << graveyardCard[i].Suit() << endl;
	}
	
}

int Deck::NumDeckCards(){ 
	return playingCard.size();
}

int Deck::NumGraveyardCards(){
	return graveyardCard.size();
}

void Deck::ShuffleDeck(){
	 random_shuffle(playingCard.begin(), playingCard.end());
	 return;
}