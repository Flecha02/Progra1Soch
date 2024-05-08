#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Arreglos
	
	int numeros[5];// Si es 5, tenemos 5 posiciones vacias; de 0 a 4
	
	cout << "Ingresa los numeros: " << endl;
	
	for(int i = 0; i < 5; i++){
		cout << "Ingrese un numero en la posicion " << i << endl;
		cin >> numeros[i];
	}	
	for (int i = 0; i < 5; i++) {
		cout << "Numero ingresado en la posicion " << i << ": " << numeros[i]<<endl;
	}
	return 0;
}

