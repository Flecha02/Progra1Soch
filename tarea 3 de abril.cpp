#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//REALIZAR INDIVIDUALMENTE UN MENÚ
	//DONDE SI INGRESO EL NÚMERO 1 O 3, ME
	//IMPRIMA "ÁREA COMÚN" , PERO SI INGRESO
	//5 O 7 IMPRIMIR "ÁREA ESPECÍFICA.
	
	int opcion;
	
	cout << "Ingrese una opcion: "<<endl;
	cin >> opcion;
	
	switch(opcion) {
		case 1: 
			cout << "AREA COMUN";
		break;
		case 3: 
			cout << "AREA COMUN";
		break;
		case 5: 
			cout << "AREA ESPECIFICA";
		break;
		case 7: 
			cout << "AREA ESPECIFICA";
		break;
		default:
			cout << "NO NOS ENCONTRAMOS EN ESE SEMESTRE";
		break;
	}
	
	return 0;
}

