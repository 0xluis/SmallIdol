#ifndef PLAYER_H
#define PLAYER_H
	
class player
{
	private:
		unsigned char id;
		int cash;
		//idol idols [3];
		unsigned char numberOfMarkers;
		//Markers* playerMarkers;
		//void copyMarkers();
	public:
		player();
		player(unsigned char playerId, int playerCash, unsigned char playerMarkers);
		void setId(unsigned char playerId);
		void setCash(int cashmoneyswag);
		//void setIdols(Idol* playerIdols);
		void setMarkers(unsigned char markers);
		
		unsigned char getId();
		int getCash();
		unsigned char getMarkers();
		//Idol* getIdols();
};
	
#endif