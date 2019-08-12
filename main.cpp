#include <iostream>
#include <string>  
using namespace std;

 
 
int main(){        
	string myreport = "report #: ";
	int numreports = 10;
	
	for(int i = 0; i < numreports; i++){ 
		cout << (myreport + atoi(i)) << endl;
	}
    return 0;
}
