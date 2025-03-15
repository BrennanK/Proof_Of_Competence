#pragma once
class Player
{
	private:
		int x;
		int y;
		int z;

	public:
		void setX(int& value);
		void setY(int& value);
		void setZ(int& value);

		int getAxis(char value);

};