#ifndef PLAYER_H
#define PLAYER_H
	
class player
{
	private:
		unsigned char id;
		unsigned int cash;
		//idol idols [3];
		unsigned char numberOfMarkers;
		//Markers* playerMarkers;
		//void copyMarkers();
	public:
		void setId(unsigned char playerId);
		void setCash(unsigned int cashmoneyswag);
		//void setIdols(Idol* playerIdols);
		//void addMarkers(unsigned char addMarkers);
		unsigned char getId();
		unsigned int getCash();
		//Idol* getIdols();
}
	
#endif