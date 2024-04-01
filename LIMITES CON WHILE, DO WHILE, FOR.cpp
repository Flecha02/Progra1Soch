#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// while
	int num1 = 0, num2;
	cout << "Ingrese un numero: "<<endl;
	cin >> num2;
	while (num1 < num2) {
		cout << "El numero es: " << num1 <<endl;
		num1++;
	}
	
	
	
	int num3 = 0, num4;
	cout << "Ingrese un numero: "<<endl;
	cin >> num4;
	
	do {
		cout << "La cantidad es: " << num3 <<endl;
		num3++;
	} while (num3 < num4);
	
	
	int num6;
	cout << "Ingrese un numero: ";
	cin >> num6;
	for (int num5 = 0; num5 < num6; num5 ++){
		cout << "Su numero es: "<< num5 <<endl;
	}
	
	return 0;
}

