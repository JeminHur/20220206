#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "Actor.h"
#include"Map.h"

class Player:public Actor
{
public:
	Player();
	Player(int startX, int startY);
	virtual ~Player();

	void moveXRight();
	void moveXRLeft();
	void moveYUp();
	void moveYDown();

	virtual char getShape() override;

};

#endif