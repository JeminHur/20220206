#pragma once
#ifndef __ACTOR_H__
#define __ACTOR_H__

class Actor
{	
protected:
	int x=0;
	int y=0;

public:
	Actor();
	Actor(int startX, int startY);
	virtual ~Actor();

	void setX(int x1);
	void setY(int y1);

	int getX();
	int getY();

	virtual char getShape() = 0;
	
};

#endif