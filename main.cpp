#include <iostream>
#include <string>
#include "Blanca.h"
#include "Negra.h"
#include <stdlib.h>
#include "Espacio.h"

Pieza*** createMatrix();
void deleteMatrix(Pieza***);
void llenarMatrix(Pieza***);
//void llenadoMatrix(Pieza***);
void imprimirMatrix(Pieza***);

using namespace std;

int main(int argc, char const *argv[]){

	char resp='s';

	while(resp=='s' || resp=='S'){

	/*
	cout<<"-----Bienvenido a XCOM juego de estrategia"<<endl;
	cout<<"Empezaran las piezas -B-, luego -N-"<<endl;

	int turno=1;

	if (turno==1){
		string positions;	

		cout<<"Ingrese su movimiento de la siguiente manera: \n POSICION_INICIAL-POSICION_FINAL \n"<<endl;
		cin>>positions;

		int p1;
		int p2;
		int p3;
		int p4;

		

		


		string x;
		string y;
		string nx;
		string ny;

		x=positions[0];
		y=positions[2];
		nx=positions[4];
		ny=positions[6];

		turno=2;
	}
	*/
	Pieza*** MAT=createMatrix();
	llenarMatrix(MAT);
	imprimirMatrix(MAT);
	deleteMatrix(MAT);

	cout<<"Desea seguir en el sistema [s/n]"<<endl;
	cin>>resp;

	}//fin while


	return 0;
}// fin main




//llenar matrix
void llenarMatrix(Pieza*** matrix){

	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){

			if ((i==0 && j==1) || (i==0 && j==3) || (i==0 && j==5) || (i==0 && j==7) || (i==2 && j==1) || (i==2 && j==3) || (i==2 && j==5) || (i==2 && j==7) || (i==1 && j==0) || (i==1 && j==2) || (i==1 && j==4) || (i==1 && j==6)){
					matrix[i][j]=new Blanca;
			}else if ((i==5 && j==0) || (i==5 && j==2) || (i==5 && j==4) || (i==5 && j==6) || (i==6 && j==1) || (i==6 && j==3) || (i==6 && j==5) || (i==6 && j==7) || (i==7 && j==0) || (i==7 && j==2) || (i==7 && j==4) || (i==7 && j==6)){
				matrix[i][j]=new Negra;
			}else {
			
				matrix[i][j]=new Espacio;
			}
		}
	}


}

//crear matrix
Pieza*** createMatrix(){
	Pieza*** retVal= new Pieza**[8];

	for(int i=0 ; i<8 ; i++){
		retVal[i]=new Pieza*[8];
	}

	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			retVal[i][j]=NULL;
		}
	}

	return retVal;
}

//delete matrix 

void deleteMatrix(Pieza*** matrix){
	for(int i=0; i<8 ; i++){
		delete matrix[i];
		matrix[i]=NULL;
	}
	delete [] matrix;
}

//imprimir Matrix

void imprimirMatrix(Pieza*** matrix){
	
	for(int i=0; i<8 ; i++){
		for(int j=0; j<8 ; j++){
			cout<<"["<<matrix[i][j]->getIcon()<<"]";
		}
		cout<<endl;
	}

}
