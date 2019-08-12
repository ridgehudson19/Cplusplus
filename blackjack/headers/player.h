#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include <vector>
#include <string>
using namespace std;


class Player
{
	private:
		string name;
		int money;
		vector<Card> hand;
		
	public:
		Player(string inName);
		Player(string inName, int inMoney);
		
	protected:


};

#endif