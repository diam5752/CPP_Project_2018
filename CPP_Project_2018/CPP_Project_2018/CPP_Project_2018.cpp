// CPP_Project_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Tile.h"
using namespace std;


int main()
{
	Tile my_tile;
	my_tile.setType(Ship);
	typos my_t = my_tile.getType();
	cout << my_t << endl;
	return 0;
}