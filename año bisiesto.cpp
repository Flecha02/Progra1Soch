#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	//Realizar un programa que ingrese un año. 
	//Calcular si el año es bisiesto o no.
	int num;

	
	cout<< "Ingrese Año: ";
	cin>> num;
	
	
	if (num % 4 == 0){
		cout<< " Año bisiesto";
	} else {
		cout<< " No es año bisiesto";
	}
	
	return 0;
}

