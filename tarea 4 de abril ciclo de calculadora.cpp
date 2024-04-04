#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int opcion, opcion2;
	double numero1, numero2, resultado;
	bool repetir = true;
	
	
	while (repetir) {
		
		cout << "Bienvenido a la calculadora de Soch"<<endl;
		cout << "Que desea resolver?"<<endl;
		cout << "1. Suma"<<endl;
		cout << "2. Resta"<<endl;
		cout << "3. Multiplicacion"<<endl;
		cout << "4. Divison"<<endl;
		cin >> opcion;
		
		if (opcion == 1){
			cout << "Ingrese su 1er. Numero"<<endl;
			cin >> numero1;
			cout << "Ingrese su 2do. Numero"<<endl;
			cin >> numero2;
			resultado = numero1 + numero2;
			cout << "El resultado es: "<<resultado<<endl;
		}
		
		if (opcion == 2){
			cout << "Ingrese su 1er. Numero"<<endl;
			cin >> numero1;
			cout << "Ingrese su 2do. Numero"<<endl;
			cin >> numero2;
			resultado = numero1 - numero2;
			cout << "El resultado es: "<<resultado<<endl;
		}
		
		if (opcion == 3){
			cout << "Ingrese su 1er. Numero"<<endl;
			cin >> numero1;
			cout << "Ingrese su 2do. Numero"<<endl;
			cin >> numero2;
			resultado = numero1 * numero2;
			cout << "El resultado es: "<<resultado<<endl;
		}
		
		if (opcion == 4){
			cout << "Ingrese su 1er. Numero"<<endl;
			cin >> numero1;
			cout << "Ingrese su 2do. Numero"<<endl;
			cin >> numero2;
			resultado = numero1 / numero2;
			cout << "El resultado es: "<<resultado<<endl;
		}
		
		
		cout << "Desea otra opcion?"<<endl;
		cout << "1. Si  2. No"<<endl;
		cin >> opcion2;
		if (opcion2 == 2){
			repetir = false;
			cout << "Ten un lindo dia";
		} else {
			repetir = true;
		}
		}
	
	return 0;
}

