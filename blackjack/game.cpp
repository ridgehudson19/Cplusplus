#include "headers/game.h"
#include "headers/player.h"
#include "headers/card.h"
#include <iostream>
#include <string>
using namespace std;
 
vector<Player> Game::player;

Game::Game()
{ 
	CreateGame();
}
 


void Game::CreateGame()
{ 
	SetPlayers(); 
	cout << "game started" << endl << endl;   
	
	return;
}
 
void Game::SetPlayers()
{
	int numPlayers = 0;
	int startingMoney = 0; 
	char willSetMoney;
	string playerName = "";
	
	cout << "How many players would like to play?:";
	cin >> numPlayers;

	while(toupper(willSetMoney) != 'N' && toupper(willSetMoney) != 'Y')
	{
		cout << "Would you like to set their starting money? (Y/N):";
		cin >> willSetMoney;
	
		if (toupper(willSetMoney) != 'N' && toupper(willSetMoney) != 'Y')
		{
			cout << "Please enter 'Y' or 'N' as a response" << endl;
		}
	}
  
	
	for (int i = 0; i < numPlayers; i++)
	{
			cout << "Name:";
			cin >> playerName;
			
			if (toupper(willSetMoney) == 'Y')
			{
				cout << "Starting money:";
				cin >> startingMoney;
				
				player.push_back(Player(playerName,startingMoney));
			}
			
			else
			{ 
				player.push_back(Player(playerName)); 
			}
	}
	
	return;
}