#pragma once
#ifndef __MYENGINE_H__
#define __MYENGINE_H__

#include"Player.h"
#include"Goal.h"
#include"Map.h"

#include<iostream>
#include<vector>
#include <windows.h>
#include <conio.h>

using namespace std;

class MyEngine
{
protected:

	char Key=' ';
	Player* player = new Player(1,1);
	Actor* goal = new Goal(8,8);
	Map* maps = new Map(20, 20);

public:
	bool bIsRunning = true;

	int Input();
	void Tick();
	void Rander();
	void Run();

	void gotoxy(int x, int y);

};

#endif