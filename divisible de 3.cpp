#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese un número.
	//Mostrar si es divisible dentro de 3 exactamente o no.
	
	int num;
	
	
	cout<< "Ingrese Numero: ";
	cin>> num;
	
	
	if (num % 3 == 0){
		cout<< " Numero divisible de 3";
	} else {
		cout<< " Numero no divisible de 3";
	}
	
	
	return 0;
}

