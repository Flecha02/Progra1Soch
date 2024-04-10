#include <iostream>
using namespace std;

double sumarnodecimales(double no1, double no2, double no3) {
	double resultado;
	
	resultado = no1 + no2 + no3;
	
	return resultado;
}

int main(int argc, char *argv[]) {
	//Crear un programa que solicite tres números con decimales.
	//Enviar los números a una función. Devolver la suma de los números.
	
	double no1, no2, no3;
	
	cout << "Ingrese su 1er. Numero: "<<endl;
	cin >> no1;
	cout << "Ingrese su 2do. Numero: "<<endl;
	cin >> no2;
	cout << "Ingrese su 3er. Numero: "<<endl;
	cin >> no3;
	
	double resultado = sumarnodecimales(no1, no2, no3);
	cout << endl << "El resultado es: " << resultado;
	
	return 0;
}

