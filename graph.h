#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <map>
#include <string>
#include <iostream>

struct vertex
{
	//this ve def was for a weighted graph which isnt needed i beleive
	//typedef std::pair<int, vertex*> ve;
	std::vector<vertex*> adj;//destination vertexies? vertixi?
	std::string name;
	unsigned char location;
	unsigned char markers;
	//Player owner = -1;
	vertex(std::string s)
	{
		name = s;
		location=0;
		markers=0;
	}
};

class graph
{
	public:
		typedef std::map<std::string, vertex*> vertexMap;
		vertexMap work;
	//public:
		graph();
		//~graph();
		void addVertex(const std::string&);
		void removeVertex(const std::string&);
		void addEdge(const std::string&, const std::string& );
		void printEdges();
		
};       

#endif
