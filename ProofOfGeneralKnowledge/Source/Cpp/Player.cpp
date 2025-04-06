#include "../Headers/Player.h"

Position3D Player::getPosition()
{
	return playerPosition;
}

void Player::setPlayerPosition(Position3D& value)
{
	playerPosition = value;
}
