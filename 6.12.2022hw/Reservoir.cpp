#include "Reservoir.h"

void Reservoir::print() {
	int i = 0;
	cout << "write type of reservoir " << endl; cin >> type[i];
	cout << "write name of reservoir " << endl; cin >> name[i];
	system("cls");

	cout << "Volume: " << (int)x * (int)y * (int)z<<endl;
	cout << "Square: " << (int)x * (int)y<<endl;
	cout << "Type of reservoir: " << *type<<endl;
	cout << "Name of reservoir: " << *name<<endl;
	i++;
}

void Reservoir::printAll() {
	for (int i{ 0 }; i < num; i++) {

	}
}