#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Realizar un programa que ingrese un a�o. 
	//Calcular si el a�o es bisiesto o no.
	int num;

	
	cout<< "Ingrese A�o: ";
	cin>> num;
	
	
	if (num % 4 == 0){
		cout<< " A�o bisiesto";
	} else {
		cout<< " No es a�o bisiesto";
	}
	
	return 0;
}

