#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ciclos infinitos por voluntad propia
	
	int control = 1;
	
	do{
		cout << "Hola estudiantes"<<endl;
		cout << "Bienvenidos al ciclo"<<endl;
		cout << "Desea repetir? 1. Si, 2. No"<<endl;
		cin >> control;
		
		if (control != 1 || control != 2) {
			cout << "Siga instrucciones";
			control == 1;
		}
	} while (control == 1);
	

	return 0;
}

