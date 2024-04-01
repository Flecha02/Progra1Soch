#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cursos;
	cout<< "Ingrese sus cursos: ";
	cin>>cursos;
	
	if (cursos == 5) {
		cout<< "Usted esta en el 1re. Semestre";
	}
	if (cursos < 5) {
			cout<< "Usted no esta inscrito";
	}
	 else {
		cout << "No se sabe el semestre ";
	}
	
	return 0;
}

