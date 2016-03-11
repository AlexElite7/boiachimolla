//File "Map.cpp"

#include "Map.h"

Map::Map() {
	
}

//Aggiorna i nodi della mappa dopo l'apertura di un nuovo nodo
void Map::refreshMap(int newX, int newY, Node* newNode) {
	NodeList* t = mapList;
	//Scorre i nodi della mappa e cerca quelli vicini al nodo nuovo creato
	//per poterli collegare
	while (t != nullptr) {
		if (t->node->getX() == newX && t->node->getY() == newY + 1) {
			t->node->setSud(newNode);
		} else if(t->node->getX() == newX && t->node->getY() == newY - 1) {
			t->node->setNord(newNode);
		} else if (t->node->getX() == newX + 1 && t->node->getY() == newY) {
			t->node->setOvest(newNode);
		} else if(t->node->getX() == newX - 1 && t->node->getY() == newY) {
			t->node->setEst(newNode);
		}
		t = t->next;
	}

}