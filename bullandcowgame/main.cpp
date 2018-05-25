#include <iostream>
#include <string>
#include "klasa.h"
#include "Welcome.h"

using namespace std;
int main()
{
	bool bwant = false;
	do
	{
		Welcome();
		Playgame();
		bwant = Asktoplayagain();
	} while (bwant==true);
	
	return 0;
}

 