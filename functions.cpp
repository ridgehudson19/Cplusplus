#include "functions.h"
#include <iostream> 
using namespace std;
 
  
void PrintEmployeeReport(string report, int mynum)
{  
		for (int i = 0; i < mynum; i++)
		{ 
			cout << report << endl;
		}
		return;
}