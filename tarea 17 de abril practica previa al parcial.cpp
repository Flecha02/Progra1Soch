#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void mensaje(int opcion) {
	int control = 1; // Variable para controlar si se repite el menú principal
	
	while (control == 1) {
		cout << "¿Qué menú desea ingresar?" << endl;
		cout << "1. Coordenadas" << endl;
		cout << "2. Mensaje para un compañero" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case 1: {
			int x, y, num;
			string palabra;
			
			cout << "Ingrese una coordenada en X: ";
			cin >> x;
			cout << "Ingrese una coordenada en Y: ";
			cin >> y;
			
			cout << "Ingrese un número: ";
			gotoxy(x, y);
			cin >> num;
			
			
			
			cout << "Ingrese una palabra: ";
			cin >> palabra;
			
			// Llama a la función gotoxy con las coordenadas x e y
			gotoxy(30, 15);
			cout << "Hola mundo desde gotoxy" << endl;
			
			for (int i = 0; i < 10; i++) {
				cout << palabra << endl;
			}
			break;
		}
		case 2:
			cout << "El símbolo ASCII más raro es: @" << endl;
			cout << "Hola, gracias por su paciencia :)" << endl;
			break;
		default:
			cout << "Ingresó cualquier otro número" << endl;
			break;
		}
		
		cout << "¿Desea volver al inicio? 1. Sí 2. No: ";
		cin >> control;
		
		if (control != 1) {
			cout << "¡Ten un buen día!" << endl;
		}
	}
	
	cout << "Fin del programa" << endl;
}

int main() {
	int opcion;
	mensaje(opcion);
	return 0;
}

