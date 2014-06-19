#include "marker.h"

marker::marker()
{
	location = "-1";
}

marker::marker(std::string destination)
{
	location = destination;
}

void graph::setLocation(std::string newLocation)
{
	location = newLocation;
}

std::string graph::getLocation()
{
	return location;
}