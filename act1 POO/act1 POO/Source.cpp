#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include"fecha.h"
#include "validar.cpp"


using namespace std;

string fecha;

int main() {
	cout << "Carlos Andr�s Zu�iga Ojeda 22110091";
	cout << "ingrese la fecha con el siguiente formato AAAA/MM/DD";
	cin >> fecha;
	fecha*f;
	f = new Fecha(fecha);
	f > quitarcaracter(fecha);
	delete f;
}

Fecha::Fecha(string fecha) {
	this -> fecha = fecha;
}
