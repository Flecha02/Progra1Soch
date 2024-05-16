#include <iostream>
#include<string>
using namespace std;
string cifrarTEXTO (const string& cadena){
	string resultado = cadena;
	int longitud = resultado.length();
	
	for (int i = 0; i < longitud; i++){
		char caracter = resultado[i];
		if (caracter == 'a' || caracter == 'A'){
			resultado[i] = '4';
		}
		if (caracter == 'e' || caracter == 'E'){
			resultado[i] = '3';
		}
		if (caracter == 'i' || caracter == 'I'){
			resultado[i] = '1';
		}
		if (caracter == 'o' || caracter == 'O'){
			resultado[i] = '0';
		}
		if (caracter == 'u' || caracter == 'U'){
			resultado[i] = '*';
		}
	}
	
	return resultado;
}
int main(int argc, char *argv[]) {
	//Ingresar una palabra en formato de texto (string). Aplicar un algoritmo que sustituya todas las letras
	//"i" por el número 1, las letras "e" por el número 3, las letras "a" por el número 4 y
	//las letras "o" por el número 0. Las letras "u" se sustituirán por un asterisco (*). Por ejemplo:
	//Contraseña: hola estudiantes
	//Sustitución de vocales por símbolos: h0l4 3st*d14nt3s.
	
	
	string frase, frase_cifrada;
	cout << "Ingrese una frase: ";
	
	//tomar la frase
	getline(cin, frase);
	
	frase_cifrada = cifrarTEXTO(frase);
	
	cout << "Frase cifrada: "<<frase_cifrada;
	return 0;
}

