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
	int control = 1; // Variable para controlar si se repite el men� principal
	
	while (control == 1) {
		cout << "�Qu� men� desea ingresar?" << endl;
		cout << "1. Coordenadas" << endl;
		cout << "2. Mensaje para un compa�ero" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case 1: {
			int x, y, num;
			string palabra;
			
			cout << "Ingrese una coordenada en X: ";
			cin >> x;
			cout << "Ingrese una coordenada en Y: ";
			cin >> y;
			
			cout << "Ingrese un n�mero: ";
			gotoxy(x, y);
			cin >> num;
			
			
			
			cout << "Ingrese una palabra: ";
			cin >> palabra;
			
			// Llama a la funci�n gotoxy con las coordenadas x e y
			gotoxy(30, 15);
			cout << "Hola mundo desde gotoxy" << endl;
			
			for (int i = 0; i < 10; i++) {
				cout << palabra << endl;
			}
			break;
		}
		case 2:
			cout << "El s�mbolo ASCII m�s raro es: @" << endl;
			cout << "Hola, gracias por su paciencia :)" << endl;
			break;
		default:
			cout << "Ingres� cualquier otro n�mero" << endl;
			break;
		}
		
		cout << "�Desea volver al inicio? 1. S� 2. No: ";
		cin >> control;
		
		if (control != 1) {
			cout << "�Ten un buen d�a!" << endl;
		}
	}
	
	cout << "Fin del programa" << endl;
}

int main() {
	int opcion;
	mensaje(opcion);
	return 0;
}

