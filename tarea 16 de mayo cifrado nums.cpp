#include <iostream>
#include<string>
using namespace std;	
int cifrar(int pwd, int num, int suma, int multi, int cifrada){
	
	suma = pwd + num;
	multi = suma * num;
	
	cifrada = multi;
	
	cout << "Su password cifrada es: "<<cifrada<<endl;
	
	return cifrada;
}
int main(int argc, char *argv[]) {
	//Ingresar una contrase�a num�rica.
	//Aplicar un algoritmo que combine suma y multiplicaci�n por un n�mero ingresado,
	//para mostrar un nuevo resultado. Por ejemplo:
	//Contrase�a: 12345
    //N�mero ingresado: 2
	//Operaci�n de suma: 12345 + 2 = 12347
	//Operaci�n de multiplicaci�n: 12347 x 2 = 24694
	//Contrase�a cifrada: 24694
	cout << "***************CIFRAR NUMEROS***************"<<endl;
	cout << endl;
	
	int pwd;
	int num;
	int suma;
	int multi;
	int cifrada;
	
	
	cout << "Ingrese su password: "<<endl;
	cin>>pwd;
	cout<<endl;
	cout << "Ingrese un numero: "<<endl;
	cin>>num;
	cout<<endl;
	
	cifrar(pwd, num, suma, multi, cifrada);
	
	
	cout << "***************CIFRAR LETRAS***************"<<endl;
	cout << endl;
	
	return 0;
}

