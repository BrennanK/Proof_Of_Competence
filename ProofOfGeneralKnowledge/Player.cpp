#include "Player.h"

void Player::setX(int& value)
{
	x=value;
}

void Player::setY(int& value)
{
	y=value;
}

void Player::setZ(int& value)
{
	z=value;
}

int Player::getAxis(char value)
{
	switch (value)
	{
	
	case 'x':
		return x;
		break;
	
	case 'y': 
		return y;
		break;

	case 'z':
		return z;
		break;
	default:
		return -1;
		break;
	}

	
}
