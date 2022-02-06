#pragma once
#ifndef __MAP_H__
#define __MAP_H__
#include<iostream>
#include<vector>
#include"Actor.h"
#include"Floor.h"
#include"Wall.h"

using namespace std;

class Map
{
protected:
	int MapRow = 10;
	int MapColumn = 10;

	Actor* wall = new Wall();
	Actor* floor = new Floor();

	vector<Actor*>ActorList;

public:
	Map();
	Map(int Row, int Column);
	virtual ~Map();

	void drowmap();

	void setRow(int row);
	void setColumn(int Column);

	int getRow();
	int getColumn();

};

#endif