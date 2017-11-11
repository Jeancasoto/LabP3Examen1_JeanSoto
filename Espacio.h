#ifndef ESPACIO_H
#define ESPACIO_H
#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;

class Espacio: public Pieza{

private:
	char icon;
	Pieza*** matrix;

public:
	Espacio();
	//Blanca(Pieza***);
	bool mover(Pieza***,int, int);
	bool perder(Pieza***, int);
	bool general(Pieza***, int);
	bool comer();
	char getIcon();


};

#endif