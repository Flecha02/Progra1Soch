#include <iostream>
using namespace std;


void mensaje (int numero) {
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero == 1){
	cout << "Hola mundo"<<endl;
	}
	
	if (numero == 2){
		cout << "Grande NEXT SEMESTER"<<endl;
	}
	
	if (numero == 3){
		cout << "START FRESH NEXT SEMESTER"<<endl;
	}
	
	if (numero == 4){
		cout << "Cuando es su cumpleaños?"<<endl;
	}
	
	
	if (numero == 5){
		cout << "Bye"<<endl;
	}
}
int main(int argc, char *argv[]) {
	
    int numero;
	mensaje(numero);
		
	return 0;
}

