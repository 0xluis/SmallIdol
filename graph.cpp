#include "graph.h"

graph::graph()
{
	//we need to set up the map
	//kyushu prefecture
	addvertex("Nagasaki");
	addvertex("Kumamoto");
	addvertex("Kagoshima");
	addvertex("Saga");
	addvertex("Fukuoka");
	addvertex("Miyazaki");
	addvertex("Oita");
	
	//okinawa prefecture
	addvertex("Okinawa");
	
	//chugoku prefecture
	addvertex("Yamaguchi");
	addvertex("Shimane");
	addvertex("Hiroshima");
	addvertex("Tottori");
	addvertex("Okayama");
	
	//shikoku
	addvertex("Ehime");
	addvertex("Kochi");
	addvertex("Kagawa");
	addvertex("Tokushima");
	
	//kansai
	addvertex("Hyogo");
	addvertex("Kyoto");
	addvertex("Osaka");
	addvertex("Wakayama");
	addvertex("Nara");
	addvertex("Shiga");
	addvertex("Mie");
	
	//Chubu
	addvertex("Fukui");
	addvertex("Gifu");
	addvertex("Aichi");
	addvertex("Ishikawa");
	addvertex("Toyama");
	addvertex("Nagano");
	addvertex("Shizuoka");
	addvertex("Yamanashi");
	addvertex("Nigata");
	
	//kanto
	addvertex("Gunma");
	addvertex("Saitama");
	addvertex("Tokyo");
	addvertex("Kanagawa");
	addvertex("Tochigi");
	addvertex("Ibaraki");
	addvertex("Chiba");
	
	//tohoku
	addvertex("Fukushima");
	addvertex("Yamagata");
	addvertex("Miyagi");
	addvertex("Akita");
	addvertex("Iwate");
	addvertex("Aomori");
	
	//hokkaido
	addvertex("Hokkaido");
}

void graph::addVertex(const std::string & name)
{
	vertexMap::iterator i = work.begin();
	i=work.find(name);
	if(i==work.end())
	{
		vertex* v;
		v=new vertex(name);
		work[name]=v;
		return;
	}
	std::cout <<"\nVertex already Exists!\n";
}

void graph::removeVertex(const std::string & name)
{
	vertexMap::iterator i;
	i=work.find(name);
	if(i!=work.end())
	{
		work.erase(name);
		return;
	}
	std::cout <<"\nVertex does not exist!\n";
}

void graph::addEdge(const std::string & from, const std::string & to)
{
	if(work.find(from) != work.end() && work.find(to) != work.end())
	{
		vertex* fromPtr = (work.find(from)->second);
		vertex* toPtr = (work.find(to)->second);
		fromPtr->adj.push_back(toPtr);
		toPtr->adj.push_back(fromPtr);
		//std::cout << "Edge created from " << " " <<  from << " to " << to;
		return;
	}
	std::cout << "Edge not possible to create, one or more vertex is nonexisting";
}

void graph::printEdges()
{
	std::map<std::string, vertex*>::iterator i = work.begin();
	for(i;i!=work.end();i++)
	{
		for(int k=0; k < (i->second)->adj.size(); k++)
		{
			std::cout << i->first << " Edge with " << (i->second)->adj.at(k)->name << std::endl;
		}
	}
}