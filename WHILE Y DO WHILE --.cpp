#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 10, num2 = 10, num3 = 0;
	//ciclo while
	while (num1 > 0) {
		cout << "El numero es: " << num1 <<endl;
		num1--;
	}
	
	//ciclo do while
	do {
		cout << "El segundo numero es: " << num2 <<endl;
		num2--;
	} while (num2 > 0);
	
	return 0;
}

