#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo[15];
	
	cout << "Ingrese los numeros para el arreglo: "<<endl;
	
	for(int i = 0; i < 15; i ++){
		cout << "Numero ingresado en la posicion: "<< i <<endl;
		cin >> arreglo[i];
	}
	return 0;
}

