#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Hola, ingrese su edad: ";
	int edad;

	cin >> edad;

	if (edad >= 18) {
		cout << "Hola, persona mayor de edad";
	}
	else
		{
		cout <<"Hola, persona menor de edad";
	}
	return 0;
}

