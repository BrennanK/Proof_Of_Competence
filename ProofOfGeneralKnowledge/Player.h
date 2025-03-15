#pragma once

struct Position3D
{
	int x;
	int y;
	int z;


};

class Player
{
	private:
		Position3D playerPosition;


	public:
		void setPlayerPosition(Position3D& value);
		Position3D getPosition();

};

