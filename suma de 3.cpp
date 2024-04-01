#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese 3 números, 
	//sume los primeros dos y reste el tercero.
	
	int num1;
	int num2;
	int num3;
	int resuf1;
	int resuf2;
	
	cout<< "Ingrese 1re. numero: ";
	cin>> num1;
	cout<< "Ingrese 2do. numero: ";
	cin>> num2;
	cout<< "Ingrese 3re. numero: ";
	cin>> num3;
	
	resuf1 = num1 + num2;
	
	resuf2 = resuf1 - num3;
	cout<< "El resultado es: " <<resuf2;
	
	
	
	return 0;
}

