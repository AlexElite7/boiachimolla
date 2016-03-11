//File "Node.cpp"

#include "Node.h"

Node::Node() {
	x = 0;
	y = 0;
	nord = nullptr;
	sud = nullptr;
	est = nullptr;
	ovest = nullptr;
}

//Inizializza nodo in base al movimento del giocatore
Node::Node(int _x, int _y, Node* parent, char direction) {
	x = _x;
	y = _y;
	//Il nodo viene collegato al nodo in cui si trovava il giocatore
	//in base allo spostamento effettuato da quest'ultimo
	switch (direction) {
		case 'n': sud = parent; break;
		case 's': nord = parent; break;
		case 'e': ovest = parent; break;
		case 'o': est = parent; break;
	}
}

int Node::getX() { return x; }
int Node::getY() { return y; }
Node* Node::getNord()  { return nord; }
Node* Node::getSud()   { return sud; }
Node* Node::getEst()   { return est; }
Node* Node::getOvest() { return ovest; }

void Node::setX(int _x) { x = _x; }
void Node::setY(int _y) { y = _y; }
void Node::setNord(Node* node)  { nord = node; }
void Node::setSud(Node* node)   { sud = node; }
void Node::setEst(Node* node)   { est = node; }
void Node::setOvest(Node* node) { ovest = node; }
