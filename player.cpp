#include "player.h"

player::player()
{
	id = 0;
	cash = 1500;
	numberOfMarkers = 0;
}

player::player(unsigned char playerId, int playerCash, unsigned char playerMarkers)
{
	id = playerId;
	cash = playerCash;
	numberOfMarkers = playerMarkers;
}

void graph::setId(unsigned char playerId)
{
	id = playerId;
}

void graph::setCash(int cashmoneyswag)
{
	cash = cashmoneyswag;
}

void graph::setMarkers(unsigned char markers)
{
	numberOfMarkers = markers;
}

unsigned char graph::getId()
{
	return id;
}

int graph::getCash()
{
	return cash;
}

unsigned char graph::getMarkers()
{
	return numberOfMarkers;
}