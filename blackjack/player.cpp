#include "headers/player.h"
#include <string>
#include <iostream>
using namespace std;


Player::Player(string inName)
{
	name = inName;
	
	//money is defaulted to $500 starting unless specified
	money = 500;
	cout << "player " << name << " created." << endl
		 << "with "   << money << " starting money." << endl; 
}
Player::Player(string inName, int inMoney)
{
	name = inName;
	money = inMoney;
	cout << "player " << name  << " created." << endl
		 << "with "   << money << " starting money." << endl;  

}