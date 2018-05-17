// CPP_Project_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// dokimastiko
class Tile
{
public:
	enum typos { Sea, Ship, Hit, Miss };
	typos t;
	struct coords
	{
		int x;
		int y;
	};
	coords c;

	typos getType()
	{
		return t;
	}

	void setType(typos new_t)
	{
		t = new_t;
	}

	coords getCoords()
	{
		return c;
	}

	void setCoords(int new_x, int new_y)
	{
		c.x = new_x;
		c.y = new_y;
	}

	void draw(bool hidden)
	{
		switch (t)
		{
		case Tile::Sea:
			cout << "~";
			break;
		case Tile::Ship:
			if (hidden == 1) cout << "~";
			else cout << "s";
			break;
		case Tile::Hit:
			cout << "X";
			break;
		case Tile::Miss:
			cout << "o";
			break;
		default:
			break;
		}

		return;
	}
};

int main()
{
	Tile my_tile;
	int x, y;
	cout << "Dwse x : ";
	cin >> x;
	cout << "Dwse y : ";
	cin >> y;
	my_tile.setCoords(x, y);
	my_tile.c = my_tile.getCoords();
	cout << "To x einai : " << my_tile.c.x << endl;
	cout << "To y einai : " << my_tile.c.y << endl;
	getchar();
	getchar();
	return 0;
}