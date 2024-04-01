#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese dos números. Por un lado, 
	//mostrar el resultado de división (no debe ser exacto). 
	//Por otro lado, debe mostrar el residuo.
	
	int num1;
	int num2;
	int resu;
	int resi;
	
	cout<< "Ingrese 1re. numero: ";
	cin>> num1;
	cout<< "Ingrese 2do. numero: ";
	cin>> num2;
	
	
	resu = num1 / num2;
	cout<< "El cociente es: " <<resu<<"\n";
	
	resi = num1%num2;
	cout<< "El residuo es: " <<resi<<"\n";
	
	
	return 0;
}

