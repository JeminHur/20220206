#include"Map.h"

Map::Map()
{
}

Map::~Map()
{
}

void Map::drowmap() {
	//Wall* wall = new Wall();
	//Floor* floor = new Floor();

	//vector<Actor*>WallList;
	//vector<Actor*>FloorList;

	/*for (int i = 0; i < wall->GetCount(); i++)
	{
		WallList.push_back(wall);
	}*/

	//for (int i = 0; i < floor->GetCount(); i++)
	//{
	//	FloorList.push_back(floor);
	//}

	/*for (int i = 0; i < MapRow; i++)
	{
		for (int j = 0; j < MapColumn; j++)
		{
			if (map[i][j] == 1)
			{
				cout << WallList[j]->getShape();
			}
			if (map[i][j] == 0)
			{
				cout << FloorList[j]->getShape();
			}
		}
		cout << endl;
	}*/

	for (int i = 0; i < MapRow * MapColumn; i++) 
	{
		if ((i / MapRow == 0)||(i % MapRow == (MapRow -1))||(i%MapRow==0)||(i/MapRow== (MapColumn - 1)))
		{
			ActorList.push_back(wall);
		}
		else
			ActorList.push_back(floor);
	}
	
	for (int i = 0; i< MapRow * MapColumn; i++)
	{
		cout << ActorList[i]->getShape();
		if (i % MapRow == (MapRow-1))
		{
			cout << endl;
		}
	}


}
