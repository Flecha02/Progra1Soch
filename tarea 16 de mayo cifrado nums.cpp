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
	//Ingresar una contraseña numérica.
	//Aplicar un algoritmo que combine suma y multiplicación por un número ingresado,
	//para mostrar un nuevo resultado. Por ejemplo:
	//Contraseña: 12345
    //Número ingresado: 2
	//Operación de suma: 12345 + 2 = 12347
	//Operación de multiplicación: 12347 x 2 = 24694
	//Contraseña cifrada: 24694
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

