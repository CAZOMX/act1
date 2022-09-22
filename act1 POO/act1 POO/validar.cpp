#include<string.h>
#include"fecha.h"


Fecha::Fecha(string fecha) {
    this->fecha = fecha;
}

void Fecha::quitarcaracter(string fecha) {
	string delimiter = "/";
	int cont = 0, D, M, Y;
	size_t pos = 0;
	string token;
	while ((pos = fecha.find(delimiter)) != string::npos) {
		token = fecha.substr(0, pos);
		fecha.erase(0, pos + delimiter.length());
		cont++;
		if (cont == 1) {
			D = stoi(token);
		}
		if (cont == 2) {
			M = stoi(token);
		}
	}
	Y = stoi(fecha);

	cout << "\nEl dia es:" << D << "\n" << endl;
	cout << "\nEl mes es:" << M << "\n" << endl;
	cout << "\nEl año es:" << Y << "\n" << endl;

    if (Y >= 1900 && Y <= 9999)
    {
        //check month
        if (M >= 1 && M <= 12)
        {
            //check days
            if ((D >= 1 && D <= 31) && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)) {

                return true;
            }
            else if ((D >= 1 && D <= 30) && (M == 4 || M == 6 || M == 9 || M == 11)) {

                return true;
            }
            else if ((D >= 1 && D <= 28) && (M == 2)) {

                return true;
            }
            else if (D == 29 && M == 2 && (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0))) {

                return true;
            }
            else {

                return false;
            }
        }
        else
        {

            return false;
        }
    }
    else
    {
        printf("Year is not valid.\n");
        return false;
    }

    return 0;
}