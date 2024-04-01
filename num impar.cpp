#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1;
	
	cout << "Ingrese un numero: ";
	cin >> num1;
	
	if ((num1 % 2) != 0) {
		cout << "El numero es impar";
	}
	else {
		cout << "El numero es par";
	}
	return 0;
}

