#include <iostream>
using namespace std;

int global = 6; //variable loal de todo el programa

void mensaje (int numero) {
	int valor = 0; //variable local de la funcion
	cout << "El valor de la variable local funcion es: "<< valor<<endl;
	
	cout << "El valor de la variable global es: "<< global<<endl;
	
	cout << "El valor de la variable main es: "<< numero<<endl;
	
	
	global = global + 10;
}

int main(int argc, char *argv[]) {
	int numero = 3; //variable local 
	mensaje(numero);
	return 0;
}

