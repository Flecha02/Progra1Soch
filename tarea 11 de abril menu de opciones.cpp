#include <iostream>
#include <string>
using namespace std;

int control_global = 1;

void mensaje(char letra, string palabra, int numero, int op){
	
	while (control_global = 1) { 
	cout <<"Que opcion desea realizar?: "<<endl;
	cin >> op;
	
	if (op == 1){
		cout << "Ingrese una letra: "<<endl;
		cin >> letra;
		cout << "letra ingresada"<<letra<<endl;
	}
	
	if (op == 2){
		cout << "Ingrese una palabra: "<<endl;
		cin >> palabra;
		cout << "palabra ingresada"<<palabra<<endl;
	}
	
	if (op == 3){
		cout << "Ingrese un numero: "<<endl;
		cin >> numero;
		cout << "numero ingresado"<<numero<<endl;
	}
	
	cout << "Desea continuar? 1. Si 2. No"<<endl;
	cin >> control_global;
}
	if (control_global != 1) {
		cout << "Gracias, ten un lindo dia"<<endl;
	}
}

int main(int argc, char *argv[]) {
	
	char letra;
	string palabra;
	int numero, op;
		
	mensaje(letra,palabra,numero,op);
	
	return 0;
}

