//File "Node.h"

#ifndef NODE_H_
#define NODE_H_

class Node {
protected:
	int x;
	int y;
	Node* nord;
	Node* sud;
	Node* est;
	Node* ovest;

public:
	Node();
	//Inizializza nodo in base al movimento effettuato dal giocatore
	Node(int _x, int _y, Node* parent, char direction);

	int getX();
	int getY();
	Node* getNord();
	Node* getSud();
	Node* getEst();
	Node* getOvest();

	void setX(int _x);
	void setY(int _y);
	void setNord(Node* node);
	void setSud(Node* node);
	void setEst(Node* node);
	void setOvest(Node* node);
};

#endif