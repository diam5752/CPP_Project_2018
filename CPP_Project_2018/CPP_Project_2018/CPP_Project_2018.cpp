// CPP_Project_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"
#include "Ship.h"
#include "Board.h"
using namespace std;


int main()
{
	coords x = { 4 , 5 };
	
	Board board;
	board.drowboards();
	coords* a = board.getAdjacentTiles(x);
	int a1 = a[0].x;
	int a2 = a[0].y;
	int a3 = a[1].x;
	int a4 = a[1].y;
	int a5 = a[2].x;
	int a6 = a[2].y;
	int a7 = a[3].x;
	int a8 = a[3].y;
	cout << a1 << " " << a2 << endl;
	cout << a3 << " " << a4 << endl;
	cout << a5 << " " << a6 << endl;
	cout << a7 << " " << a8 << endl;
	return 0;
}