#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0, num2 = 0, num3;
	//ciclo while
	while (num1 < 10) {
		cout << "El numero es: " << num1 <<endl;
		num1++;
	}
	
	//ciclo do while
	do {
		cout << "El segundo numero es: " << num2 <<endl;
		num2++;
	} while (num2 < 10);
	
	return 0;
}

