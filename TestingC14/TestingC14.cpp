// TestingC14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
	vector<int> table {1,2,3,4,5};

	cout << "The values in the table are\n";
	for (int i = 0; i < 5; i++)
	{
		cout <<  table[i] << "  ";
	}

	cout << "\nPress a key to exit";
	while (true)
	{
		if (_kbhit()) break;
	}
	
    return 0;
}

