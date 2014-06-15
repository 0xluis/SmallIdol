#ifndef MARKER_H
#define MARKER_H
class markers
{
	private:
		unsigned char location;
		unsigned char neighbors;
		void getNeighbors();
	public:
		unsigned char getLocation();
		void setChar();
}

#endif