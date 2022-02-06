#pragma once
#ifndef __FLOOR_H__
#define __FLOOR_H__

#include "Actor.h"

class Floor : public Actor
{
public:
	Floor();
	Floor(int startX, int startY);
	virtual ~Floor();
	
	virtual char getShape() override;

};

#endif