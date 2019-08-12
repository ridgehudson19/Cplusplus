#ifndef CARD_H
#define CARD_H  

#include <string>
using namespace std;

class Card
{
	private:
		string rank; 
		char suit; 
		 
	public:
		Card(string inRank, char inSuit);
		string Rank();
		char Suit();
		
	protected:

};

#endif