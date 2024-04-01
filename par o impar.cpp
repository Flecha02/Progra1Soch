#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout<< "Ingrese un numero: ";
	cin >> num;
	
	if (num % 2 == 0){
		cout<< "Es numero par";
	} else {
		cout<< "Es numero impar";
	}
	return 0;
}

