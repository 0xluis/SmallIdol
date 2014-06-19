#ifndef MARKER_H
#define MARKER_H

#include<iostream>

class marker
{
	private:
		std::string location;
		
	public:
		marker();
		marker(std::string location);
		void setLocation(std::string newLocation);
		std::string getLocation();
		
};

#endif