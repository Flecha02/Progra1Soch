#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		int num1;
		int num2;
		char operacion;
		int resultado;
		
		cout << "Ingrese el 1re numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "Ingrese la operacion (+, -, *, /): ";
		cin >> operacion;
		
		if (operacion == '+') {
			resultado = num1 + num2;
			cout << "El resultado es: " << resultado << endl;
		}
		
		if (operacion == '-') {
			resultado = num1 - num2;
			cout << "El resultado es: " << resultado << endl;
		}
		
		if (operacion == '*') {
			resultado = num1 * num2;
			cout << "El resultado es: " << resultado << endl;
		}
		
		if (operacion == '/') {
			resultado = num1 / num2;
			cout << "El resultado es: " << resultado << endl;
		}
	return 0;
}

