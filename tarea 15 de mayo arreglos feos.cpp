#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	
	int arreglo [5];
	//Llenar un arreglo de atrás para adelante.
	
	for (int i = 4; i >= 0; i --){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo[i];
		cout << endl;
	}
	
	
	for (int i = 0; i < 5; i++){
		cout << "El numero en la casilla: "<< i << " es: " << arreglo[i] <<endl;
	}
	
	
	cout << "*******************************************************************************************************"<<endl;
	cout << endl;
	
	//Clonar un arreglo.
	
	int arreglo2 [5];
	int new_arreglo[5];
	
	for (int i = 0; i < 5; i ++){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo2[i];
		cout << endl;
	}
	
	for (int i = 0; i < 5; i++){
		new_arreglo[i] = arreglo2[i];
		cout << "El numero en la casilla: "<< i << " es: " << new_arreglo[i] <<endl;
		
	}
	
	cout << "*******************************************************************************************************"<<endl;
	cout << endl;
	
	
	//Ingresar 10 números en un arreglo. Estos pueden ser positivos o negativos.
	//Posteriormente, volver positivos todos los números negativos. Los números positivos dejarlos iguales.
	
	
	int arreglo3[10];
	
	for (int i = 0; i < 10; i ++){
		cout << "Ingresa un numero: "<<endl;
		cin >> arreglo3[i];
		cout << endl;
		
		if(arreglo3[i] < 0){
			arreglo3[i] *= -1;
		}
		cout << "El numero en la casilla: "<< i << " es: " << arreglo3[i] <<endl;
	}
	
	cout << "*******************************************************************************************************"<<endl;
	cout << endl;
	
	
	//Crear un arreglo de 5 números decimales.
	//Posteriormente, extraer en dos arreglos distintos, el valor entero y el valor decimal.
	
	double arreglo4[4];
	int arreglo_nuevo[4], entero;
	double arreglo_decimal[4], decimal;
	
	// Ingresar los valores para el arreglo
	for (int i = 0; i < 4; ++i) {
		cout << "Ingrese valores para llenar el Arreglo: "<<endl;
		cin >> arreglo4[i];
	}
	
	for (int i = 0; i < 4; ++i) {
		arreglo_nuevo[i] = arreglo4[i];
		cout << "El numero entero: "<< i << " es: " << arreglo_nuevo [i] <<endl;
	}
	
	for (int i = 0; i < 4; ++i) {
		decimal = arreglo4[i] - arreglo_nuevo[i];
		arreglo_decimal[i] = decimal;
		cout << "El numero decimal: "<< i << " es: " << arreglo_decimal [i] <<endl;
	}
	
	return 0;
}

