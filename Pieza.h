#ifndef PIEZA_H
#define PIEZA_H
#include <iostream>
#include <string>

class Pieza{

public:


	bool mover(Pieza***,int, int);
	bool pierde(Pieza***, int);
	bool general(Pieza***, int);
	char icono();
};


#endif