#ifndef BLANCA_H
#define BLANCA_H
#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;

class Blanca: public Pieza{

private:
	char icon;
	Pieza*** matrix;

public:
	Blanca();
	//Blanca(Pieza***);
	bool mover(Pieza***,int, int);
	bool perder(Pieza***, int);
	bool general(Pieza***, int);
	bool comer();
	char getIcon();


};

#endif