#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool examen = false;
	char opcion;
	cout << "El parcial sera facil? S/N: ";
	cin >> opcion;
		
	if (opcion == 'S') {
		examen = false;
		cout << "El parcial sera facil" << endl;
	}
	
	if (opcion == 'N') {
		examen == true;
		cout << "El parcial sera dificil" << endl;
		}
	
	cout << "Profe si corrio mi programa, me debe decir el lunes. Memo se va a divorciar";
	return 0;
	}

