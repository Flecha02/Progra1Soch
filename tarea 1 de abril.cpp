#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a = 0;
	int b = 1;
	
	int n;
	cout << "Ingrese el número para la serie de Fibonacci: ";
	cin >> n;
	
	cout << "Serie de Fibonacci hasta: " << n << ":\n";
	
	for (int i = 0; i < n; ++i) {
		cout << a << " ";
		
		int siguiente = a + b;
		a = b;
		b = siguiente;
	}
	return 0;
}

