#include <iostream>
#include <string>
#include "Blanca.h"
#include "Negra.h"


void createMatrix();
void deleteMatrix(Pieza***);
void llenarMatrix(Pieza***);
void imprimirMatrix(Pieza***);

using namespace std;

int main(int argc, char const *argv[]){

	



	return 0;
}// fin main



//llenar matrix
void llenarMatrix(Pieza*** matrix){

	for (int i = 0; i < count; ++i){
		for (int j = 0; j < count; ++j){

			Blancas* blancas=Blancas::getIcono();

			mat[i][j]=blancas->getIcono();
		}
	}

}

//crear matrix
Pieza*** createMatrix(){
	Pieza*** retVal= new Pieza*[size];

	for(int i=0 ; i<8 ; i++){
		retVal[i]=new Pieza[8];
	}

	for (int i = 0; i < count; ++i){
		for (int j = 0; j < count; ++j){
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
			cout<<matrix[i][j];
		}
		cout<<endl;
	}

}
