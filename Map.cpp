#include"Map.h"

Map::Map()
{
}

Map::Map(int Row, int Column)
{
	MapRow = Row;
	MapColumn = Column;
}

Map::~Map()
{
	
}

void Map::drowmap() 
{
	for (int i = 0; i < MapRow * MapColumn; i++) 
	{
		if (((i / MapRow) == 0)||((i % MapRow) == (MapRow -1))||((i%MapRow)==0)||((i/MapRow)==(MapColumn - 1)))
		{
			ActorList.push_back(wall);
		}
		else
			ActorList.push_back(floor);
	}
	
	for (int i = 0; i< ActorList.size(); i++)
	{
		cout << ActorList[i]->getShape();
		if (i % MapRow == (MapRow-1))
		{
			cout << endl;
		}
	}

}

void Map::setRow(int row)
{
	MapRow = row;
}

void Map::setColumn(int Column)
{
	MapColumn = Column;
}

int Map::getRow()
{
	return MapRow;
}

int Map::getColumn()
{
	return MapColumn;
}

