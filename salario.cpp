#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int salario;
	cout<< "Ingrese su salario: ";
	cin>>salario;
	
	if (salario == 2800) {
		cout<< "Salario igual";
	}
	if (salario < 2800) {
		cout<< "Salario inferior";
	}
	if (salario > 2800) {
		cout<< "Salario mayor";
	}
	return 0;
}

