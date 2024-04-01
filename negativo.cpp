#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//CREAR UN PROGRAMA QUE RESTE DOS
	//NUMEROS Y MUESTRE SI EL RESULTADO ES POSITIVO O NEGATIVO
	
	int num1;
	int num2;
	
	cout<< "Ingrese 1re. numero: ";
	cin>> num1;
	cout<< "Ingrese 2do. numero: ";
	cin>> num2;
	
	int resu;
	resu = num1 - num2;
	cout<< "El resultado es: " <<resu <<"\n";
	
	if (resu < 0){
		cout<< " Es numero negativo";
	} else {
		cout<< " Es numero positivo";
	}
	
	
	
	return 0;
}

