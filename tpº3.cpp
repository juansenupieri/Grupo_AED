
#include<iostream>
using namespace std;

int main() {

	int anio;
	int bisi;
	int mes;
	int num1;
	do {
		cout << "este programa le permite saber si un anio es biciesto y cuanto dias tiene el mes" << endl;
		cout << "ingrese a continuacion el anio" << endl;
		cin >> anio;
		while (anio<1582 ||anio>3021) {
			cout << " ingrese un año valido" << endl;
			cin >> anio;
		}
		if (anio%4==0) {
			cout << "el anio es bisiesto" << endl;
		} else {
			cout << "el anio no es bisiesto" << endl;
		}
		cout << "ingrese a continuacion el mes" << endl;
		cin >> mes;
		while (mes<0 || mes>12) {
			cout << "ingrese un mes valido" << endl;
			cin >> mes;
		}
		if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			cout << " el mes tiene 31 dias" << endl;
		} else {


			if (mes==4 || mes==6 || mes==9 || mes==11) {
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
				cout << "el mes tiene 30 dias" << endl;
			} else {
				if (anio%4==0 && mes==2) {
					cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
					cout << "el mes tiene 29 dias" << endl;
				} else {
					if (anio%4>0 && mes==2) {
						cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
						cout << "el mes tiene 28 dias" << endl;
					} else {
						cout << "  " << endl;
					}
				}
			}
		}
	} while (!(anio==0 && mes==0));
	return 0;
}

