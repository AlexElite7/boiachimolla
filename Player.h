//File "Player.h"

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Map.h"

class Player {
protected:
	Node* current;
	Map* map;

public:
	Player(Map*);

	Node* getCurrent();
	Node* setCurrent(Node*);

	//Sposta il giocatore in base alla direzione specificata
	void move(char direction);

};

#endif
