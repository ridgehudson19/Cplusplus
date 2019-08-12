#include <iostream>
#include <cstring>
using namespace std;


int main(){
	  
	  
	 char card[2], newcard[2] = "10";
	 
	
	 strcpy(card, newcard);
	 cout << card << endl;
	 
	 cout << card[1] << endl;
	 
	 
	
	
	return 0;
}