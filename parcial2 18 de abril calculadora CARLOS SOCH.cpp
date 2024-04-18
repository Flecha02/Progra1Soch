#include <iostream>
#include <cmath>
using namespace std;

double hipotenusa (double opuesto, double adyacente, double resultado) {
	
	cout << "Ingrese el lado opuesto: ";
	cin >> opuesto;
	cout << "Ingrese el lado adyacente: ";
	cin >> adyacente;
	
	resultado = sqrt((opuesto * opuesto) + (adyacente * adyacente));
	cout << "La hipotenusa es: "<<resultado<<endl;
	
	return resultado;
}

double angulo (double angulo1, double angulo2, double resultado2) {
	
	cout << "Ingrese un angulo: ";
	cin >> angulo1;
	cout << "Ingrese el otro angulo: ";
	cin >> angulo2;
	
	resultado2 = 180 - angulo1 - angulo2	;

	if (resultado2 <= 0) {
		cout << "El angulo supera 180";
	}
	else {
		cout << "El angulo faltante es de: "<<resultado2<<endl;
	}
	return resultado2;
}

int factorial(int num) {
	
	cout << "Ingrese un numero para saber su factorial: "<<endl;
	cin >> num;
	
	long long fact = 1;
	for(int i = 1; i <= num; ++i) {
		fact *= i;
	}
		cout << "El factorial de " << num << " es: " << fact << std::endl;
	
	return num;
}


double vuelto (double gastado, double billete1, double billete2, double vuelto){
	
	cout << "Cuanto gasto?: "<<endl;
	cin >> gastado;
	cout << "Ingrese 1er billete: "<<endl;
	cin >> billete1;
	cout << "Ingrese 2do billete: "<<endl;
	cin >> billete2;
	
	vuelto =  (billete1 + billete2) - gastado;
	
	if (gastado > (billete1 + billete2)) {
		cout << "Complete el dinero"<<endl;
	}
	else {
		cout << "Su vuelto es de: "<<vuelto<<endl;
	}
	
	return vuelto;
}

void mensaje (int opcion) {
	
	int control = 1;
	
	while (control == 1){
		double opuesto, adyacente, resultado1, angulo1, angulo2, resultado2, gastado, billete1, billete2, vueltos;
		int num;
		
		cout << "Bienvenido a la calculadora"<<endl;
		cout << "Que opción desea realizar?"<<endl;
		cout << "1. Hipotenusa"<<endl;
		cout << "2. Angulo Faltante"<<endl;
		cout << "3. Factorial"<<endl;
		cout << "4. Vuelto"<<endl;
		cin >> opcion;
		
		if (opcion == 1) {
			hipotenusa(opuesto, adyacente, resultado1);
		}
		else if (opcion == 2) {
			angulo(angulo1, angulo2, resultado2);
		}
		else if (opcion == 3) {
			factorial(num);
		}
		else if (opcion == 4) {
			vuelto (gastado, billete1, billete2, vueltos);
		}
		
		
		cout << "Desea continuar con otra opción?"<<endl;
		cout << "1. Si      2. No"<<endl;
		cin >> control;
		
		if (control != 1){
			cout << "Que tengas un lindo día";
		}
		else {
			system ("cls");
		}
	}
	
	
}

int main(int argc, char *argv[]) {
	
	int opcion;
	mensaje(opcion);
	
	return 0;
}

