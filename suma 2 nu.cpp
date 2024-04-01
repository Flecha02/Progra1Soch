#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//CREAR UN PROGRAMA QUE INGRESE DOS
	//NÚMEROS Y LOS SUME
	
	int num1;
	int num2;
	
	cout<< "Ingrese 1re. numero: ";
	cin>> num1;
	cout<< "Ingrese 2do. numero: ";
	cin>> num2;
		
	int resu;
	resu = num1 + num2;
	cout<< "El resultado es: " <<resu;
	
	return 0;
}

