#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nac;
	cout<< "Ingrese su Nacimiento: ";
	cin>>nac;
		
	if (nac <= 2000) {
		cout<< "Usted es del Siglo XX";
	} else {
		cout << "Usted es del Siglo XXI";
	}
	return 0;
}

