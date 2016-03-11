//File "Map.h"

#ifndef MAP_H_
#define MAP_H_

#include "Node.h"

//
struct NodeList {
	Node* node;
	NodeList* next;
};

class Map {
protected:
	NodeList* mapList;	//Lista dei nodi della mappa

public:
	Map();

	void refreshMap(int newX, int newY, Node* newNode);	//Aggiorna i nodi della mappa dopo l'apertura di un nuovo nodo
	void printMap();
};

#endif