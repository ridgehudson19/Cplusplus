#include "headers/card.h"  
#include <cctype>
using namespace std;

Card::Card(string inRank, char inSuit): rank(inRank), suit(toupper(inSuit))
{  
}

string Card::Rank()
{
	return rank;
}

char Card::Suit()
{
	return suit;
}