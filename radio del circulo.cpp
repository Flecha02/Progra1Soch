#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pi = 3.1416;
	float radio;
	float resultado;
	
	cout << "Ingrese el radio de su circulo: ";
	cin >> radio;
	
	resultado = pi * (radio * radio);
	cout << "El area del circulo es: " << resultado;
	
	return 0;
}

