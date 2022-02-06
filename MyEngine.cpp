#include"MyEngine.h"

int MyEngine::Input()
{
	Key = _getch();

	return 0;
}

void MyEngine::Tick()
{
	if (Key == 'Q' || Key == 'q') {
		bIsRunning = false;
	}

	else if (Key == 'A' || Key == 'a')
	{
		if (player->getX() == 1)
		{
			player->setX(1);
		}
		else
		{
			player->moveXRLeft();
		}
	}

	else if (Key == 'D' || Key == 'd')
	{
		if (player->getX() == maps->getRow() - 2)
		{
			player->setX(maps->getRow() - 2);
		}
		else
		{
			player->moveXRight();
		}
	}

	else if (Key == 'W' || Key == 'w')
	{
		if (player->getY() == 1)
		{
			player->setY(1);
		}
		else
		{
			player->moveYUp();
		}	
	}

	else if (Key == 'S' || Key == 's')
	{
		if (player->getY() == maps->getColumn()-2)
		{
			player->setY(maps->getColumn() - 2);
		}
		else
		{
			player->moveYDown();
		}
	}
}

void MyEngine::Rander()
{
	system("cls");

	Map* maps = new Map(20, 10);

	maps->drowmap();
	
	gotoxy(goal->getX(), goal->getY());
	cout << goal->getShape();

	gotoxy(player->getX(), player->getY());
	cout << player->getShape();

	if (player->getX() == goal->getX() && player->getY() == goal->getY())
	{
		cout << "µµÂø" << endl;
	}
}

void MyEngine::gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}