#include <iostream>
#include <string>
using namespace std;

string unirpalabras(string palabra1, string palabra2) {
	string unido;
	
	unido = palabra1 + palabra2;
	cout << "Sa palabra unida es: "<<unido;

	return unido;
}

int main(int argc, char *argv[]) {
	//Crear un programa que solicite dos palabras.
	//Enviar las palabras a una función.
	//La función debe devolver las palabras unidas.
	string palabra1, palabra2;
	
	cout << "Ingrese su 1ra. palabra: "<<endl;
	cin >> palabra1;
	cout <<"Ingrese su 2da. palabra: "<<endl;
	cin >> palabra2;
	
	
	string unido = unirpalabras(palabra1, palabra2);
	
	return 0;
}

