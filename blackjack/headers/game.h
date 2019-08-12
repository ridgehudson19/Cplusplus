#ifndef GAME_H
#define GAME_H
#include "deck.h"
#include "player.h"
#include <vector>
using namespace std;

class Game
{
	private: 
		static vector<Player> player;
		 
	public: 
		Game(); 
	   static void CreateGame();
	   static void SetPlayers();
	   static void SetDeck();
	protected:

};

#endif