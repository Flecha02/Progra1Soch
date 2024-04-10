#include <iostream>
#include <vector>

void multiples(int num) {
	std::cout << "Los m�ltiplos de " << num << " son: ";
	for(int i = 1; i <= 10; ++i) {
		std::cout << num * i << " ";
	}
	std::cout << std::endl;
}

void factorial(int num) {
	long long fact = 1;
	for(int i = 1; i <= num; ++i) {
		fact *= i;
	}
	std::cout << "El factorial de " << num << " es: " << fact << std::endl;
}

void fibonacci(int num) {
	std::vector<int> fib(num);
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i < num; ++i) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	std::cout << "La serie Fibonacci hasta " << num << " es: ";
	for(const auto &i : fib) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main() {
	int num, action;
	std::cout << "Introduce un n�mero: ";
	std::cin >> num;
	std::cout << "Selecciona una acci�n (1: m�ltiplos, 2: factorial, 3: fibonacci): ";
	std::cin >> action;
	switch(action) {
	case 1:
		multiples(num);
		break;
	case 2:
		factorial(num);
		break;
	case 3:
		fibonacci(num);
		break;
	default:
		std::cout << "Acci�n no v�lida." << std::endl;
	}
	return 0;
}


