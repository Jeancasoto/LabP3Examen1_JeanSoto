#ifndef NEGRA_H
#define NEGRA_H
#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;

class Negra: public Pieza{

private:

	char icon;
	Pieza*** matrix;

public:
	//Negra();
	//Negra(Pieza***);
	bool mover(Pieza***,int, int);
	bool perder(Pieza***, int);
	bool general(Pieza***, int);
	bool comer();
	char getIcon();


};

#endif