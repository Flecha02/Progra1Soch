#include <iostream>
using namespace std;

double calculadora(double num1, double num2, char op) {
	double resultado;
	if (op == '+') {
		resultado = num1 + num2;
	}
	if (op == '-') {
		resultado = num1 - num2;
	}
	if (op == '*') {
		resultado = num1 * num2;
	}
	if (op == '/') {
		resultado = num1 / num2;
	}
	return resultado;
}


void mostrarMensaje(){
	cout << "Hola, ingresa 2 numeros y la operacion que desees";
}

int main(int argc, char *argv[]) {
	double num1, num2;
	char op;
	
	
	mostrarMensaje();
	cin >> num1;
	cin >> num2;
	cout << endl << "Que operacion desea hacer?";
	cin >> op;
	
	
	double resultado = calculadora(num1, num2, op);
	cout << endl << "Su resultado es: " << resultado;
	
	return 0;
}


