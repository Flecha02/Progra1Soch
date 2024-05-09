#include <iostream>
#include <Windows.h>
using namespace std;
bool control = true;
int main(int argc, char *argv[]) {
	//Suma de elementos: Crear un programa que solicite al usuario 5 números.
	//Luego sumarlos todos y mostrar el resultado.
	
	while (control == true){
	
	int arreglo[5];
	int suma = 0;
	
	cout << "Bienvenido al sistema"<<endl;
	
	for (int i = 0; i < 5; i++){
		cout << "Ingrese un numero: "<<endl;
		cin >> arreglo[i];
	}
	
	for (int i = 0; i < 5; i++){
		suma = suma + arreglo[i];
	}
	cout << "El resultado es: "<<suma<<endl;
	
	
	
	cout << "*************************************************************************"<<endl;
	
	//Mayor elemento: Crear un programa que solicite al usuario 5 números.
	//Luego mostrar el resultado mayor.
	
	int arreglo2[5];
	int mayor = -100000;
	
	cout << "Bienvenido al sistema"<<endl;
	
	for (int i = 0; i < 5; i++){
		cout << "Ingrese un numero: "<<endl;
		cin >> arreglo2[i];
	}
	
	for (int i = 0; i < 5; i++){
		
		if (arreglo2[i] > mayor) {
			mayor = arreglo2[i];
		}
		
	}
	
	cout << "El numero mayor es: "<<mayor<<endl;
		
	cout << "*************************************************************************"<<endl;
	
	
	//Promedio: Crear un programa que solicite al usuario 5 números.
	//Luego calcular el promedio de los 5 números. Se recomienda utilizar variables float o double.
	
	double arreglo3[5];
	double suma2 = 0;
	double promedio;
	
	cout << "Bienvenido al sistem de notasa"<<endl;
	cout << "Ingrese la nota de Programacion I: "<<endl;
	cin >> arreglo3[0];
	cout << "Ingrese la nota de Electricidad I: "<<endl;
	cin >> arreglo3[1];
	cout << "Ingrese la nota de Tecnicas de Estudio I: "<<endl;
	cin >> arreglo3[2];
	cout << "Ingrese la nota de Estructuras Logicas I: "<<endl;
	cin >> arreglo3[3];
	cout << "Ingrese la nota de Matematicas I: "<<endl;
	cin >> arreglo3[4];
	
	
	for (int i = 0; i < 5; i++){
		suma2 = suma2 + arreglo3[i];
		promedio = suma2 / 5;
	}
	cout << "El promedio es: "<<promedio<<endl;
	
	cout << "*************************************************************************"<<endl;
	
	
	
	//Buscar un número: Crear un programa que solicite al usuario 10 números diferentes.
	//Luego, solicitar un número en una variable externa al arreglo.
	//Si el número existe dentro del arreglo, mostrar el mensaje "felicidades". Si no lo encuentra, mostrar el mensaje "mala suerte".
	
	
	int arreglo4[10];
	int externo;
	bool encontra = false;
	
	
	for (int i = 0; i < 10; i++){
		cout << "Ingrese un numero para llenar el arreglo: "<<endl;
		cin >> arreglo4[i];
	}
	cout << "Ingrese un numero para buscralo: "<<endl;
	cin >> externo;
	
	for (int i = 0; i < 10; i++){
		if (externo == arreglo4[i]){
			cout << "Felicidades";
			encontra = true;
		} 
	}
	if (!encontra){
		cout << "Mala suerte";
	}
	
	
	
	cout << "Desea repetir el programa? 1. Si  2. No"<<endl;
	int controlnumero;
	cin >> controlnumero;
	if (controlnumero == 1){
		control = true;
		system("cls");
	} else {
		control = false;
		cout << "Hasta Luego"<<endl;
	}
}
	
	return 0;
}

