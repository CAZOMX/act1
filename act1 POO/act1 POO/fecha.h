#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Fecha {
public:
	Fecha(string);
	void quitarcaracter(string fecha);
private:
	string fecha;
};