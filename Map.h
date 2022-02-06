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
	Actor* wall = new Wall();
	Actor* floor = new Floor();

	vector<Actor*>ActorList;

	int MapRow = 10;
	int MapColumn = 10;

public:
	Map();
	virtual ~Map();

	void drowmap();
	
};

#endif