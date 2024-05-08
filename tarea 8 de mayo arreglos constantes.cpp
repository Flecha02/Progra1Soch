#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	const int tamanio = 5;
	int arreglo[tamanio];
	
	for (int i = 0; i < tamanio; i++){
		cout << "Ingrese un numero: "<<endl;
		cin >> arreglo[i];
		cout << "El numero que se ingreso es: "<<arreglo[i] <<endl;
		
	}
	
	
	cout << "*************************************************************"<<endl;
	
	const int longi = 2;
	int arreglo2[longi];
	
	for (int i = 0;i < longi; i++){
		cout << "Ingrese un numero: "<<endl;
		cin >> arreglo2[longi];
		cout <<"Ingreso un numero que es: "<<arreglo2[longi]<<endl;
	}
	
	cout << "*************************************************************"<<endl;
	
	
	const int tamanio2 = 6;
	int arreglo3[tamanio];
	
	for (int i = 0; i < tamanio2; i++){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo3[tamanio2];
		cout << "Fue ingresado el numero: "<<arreglo3[tamanio2]<<endl;
	}
	
	cout << "*************************************************************"<<endl;
	
	const int capacidad = 1;
	int arreglo4[capacidad];
	
	for (int i = 0; i < capacidad; i++){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo4[capacidad];
		cout << "Ingresado el numero: "<<arreglo4[capacidad]<<endl;
	}
	
	cout << "*************************************************************"<<endl;
	
	const int espacio = 10;
	int arreglo5[espacio];
	
	for (int i = 0; i < espacio; i++){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo5[espacio];
		cout << "Ingresado el numero: "<<arreglo5[espacio]<<endl;
	}
	
	return 0;
}

