#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

bool control = true;
char currentPlayer = 'X';
char tablero[3][3];

// Inicializa el tablero con espacios vacíos
void inicializarTablero() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tablero[i][j] = ' ';
		}
	}
}

int dado() {
	srand(time(NULL));
	return (rand() % 6) + 1;
}

void gotoxy(int X, int Y) {
	COORD Coord;
	Coord.X = X;
	Coord.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
}

bool ganar(char tablero[3][3]) {
	for (int i = 0; i < 3; i++) {
		// Verificar filas y columnas
		if (tablero[i][0] != ' ' && tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]) {
			return true;
		}
		if (tablero[0][i] != ' ' && tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i]) {
			return true;
		}
	}
	// Verificar diagonales
	if (tablero[0][0] != ' ' && tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
		return true; // Diagonal de izquierda a derecha
	}
	if (tablero[0][2] != ' ' && tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
		return true; // Diagonal de derecha a izquierda
	}
	return false;
}

void jugador(string& p1, string& p2) {
	gotoxy(80, 20);
	cout << "Nombre del jugador 1: ";
	cin >> p1;
	gotoxy(80, 25);
	cout << "Nombre del jugador 2: ";
	cin >> p2;
}

void mapa() {
	gotoxy(2, 0);
	cout << "2--5--8";
	gotoxy(0, 2);
	cout << "2" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "5" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "8" << endl;
}

bool valido(int value) {
	return value == 2 || value == 5 || value == 8;
}

int main(int argc, char* argv[]) {	
	while (control) {
		int inicio = dado();
		
		if (inicio % 2 == 0) {
			currentPlayer = 'X';
		} else {
			currentPlayer = 'O';
		}
		
		string p1, p2;
		jugador(p1, p2);
		int turnos = 9;
		int fila, columna;
		int X, Y;
		
		inicializarTablero();
		mapa();
		
		for (int i = 0; i < turnos; i++) {
			gotoxy(80, 4);
			cout << "Turno de " << (currentPlayer == 'X' ? p1 : p2) << " (" << currentPlayer << ")";
			
			do {
				gotoxy(80, 6);
				cout << "Que fila desea jugar (2, 5, 8): ";
				cin >> fila;
				if (fila == 2) {
					X = 0;
				} else if (fila == 5) {
					X = 1;
				} else if (fila == 8) {
					X = 2;
				}
				if (!valido(fila)) {
					gotoxy(80, 7);
					cout << "Seleccione fila valida (2, 5, 8)";
					gotoxy(80, 7);
					cout << "                                 ";
				}
			} while (!valido(fila));
			
			do {
				gotoxy(80, 8);
				cout << "Que columna desea jugar (2, 5, 8): ";
				cin >> columna;
				if (columna == 2) {
					Y = 0;
				} else if (columna == 5) {
					Y = 1;
				} else if (columna == 8) {
					Y = 2;
				}
				if (!valido(columna)) {
					gotoxy(80, 9);
					cout << "Seleccione columna valida (2, 5, 8)";
					gotoxy(80, 9);
					cout << "                                   ";
				}
			} while (!valido(columna));
			
			// Verificar si la casilla ya está ocupada
			if (tablero[X][Y] != ' ') {
				gotoxy(80, 10);
				cout << "La casilla ya está ocupada. Seleccione otra.";
				i--; // Permitir que el jugador actual intente de nuevo
				continue;
			}
			
			gotoxy(fila, columna);
			tablero[X][Y] = currentPlayer;
			cout << currentPlayer;
			
			if (ganar(tablero)) {
				gotoxy(80, 22);
				cout << "¡" << (currentPlayer == 'X' ? p1 : p2) << " ha ganado!";
				break; // Salir del bucle si hay un ganador
			}
			
			currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
		}
		
		if (!ganar(tablero)) {
			gotoxy(80, 24);
			cout << "¡Empate! No hay ganador.";
		}
		
		gotoxy(80, 26);
		cout << "Desean jugar otra vez? S o N: ";
		char op;
		cin >> op;
		if (op == 'n' || op == 'N') {
			control = false;
			gotoxy(80, 28);
			cout << "Gracias por jugar";
		} else {
			system("cls");
		}
	}
	
	return 0;
}
