#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese 5 números. 
		//El número 1 debe restarse con el número 5.
		//El número 2 debe sumarse al número 3 y el número 4.
		//Como resultado final, mostrar la multiplicación de ambos números
	
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int resuf1;
	int resuf2;
	int resuf3;
	
	cout<< "Ingrese 1re. numero: ";
	cin>> num1;
	cout<< "Ingrese 2do. numero: ";
	cin>> num2;
	cout<< "Ingrese 3re. numero: ";
	cin>> num3;
	cout<< "Ingrese 4to. numero: ";
	cin>> num4;
	cout<< "Ingrese 5to. numero: ";
	cin>> num5;
	
	resuf1 = num1 - num5;
	
	resuf2 = num2 + num3 + num4;
	
	resuf3 = resuf1 * resuf2;
	
	cout<< "El resultado es: " <<resuf1<<"\n";
	cout<< "El resultado es: " <<resuf2<<"\n";
	cout<< "El resultado es: " <<resuf3<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

