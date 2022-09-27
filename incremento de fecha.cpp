#include <iostream> //sobrecarga de operadores investigar 
using namespace std;

class Fecha {
private:   //ATRIBUTOS O CARACTERISTICAS 
	int anio, mes, dia;
	operator const char* () {
		ostringstream formatteddate{};
		foratteddate << mes << "/" << dia << "/" << anio;
		string dateinstring = formatteddate.str();
		return dateinstring.c_str();
	}

public:    //METODOS O ACCIONES
	void muestramelafecha();
};
void Fecha::muestramelafecha() {
	int anio, mes, dia;

	cout << "introducir el a" << (char)164 << "o: " << endl;
	cin >> anio;
	cout << "introducir mes: " << endl;
	cin >> mes;
	cout << "introducir dia: " << endl;
	cin >> dia;
	cout << "la fecha es: " << anio << " / " << mes << " / " << dia << endl;


	if (mes>12 or dia>31 or mes <=0 or dia <=0 or anio <=0) {
		cout << "la fecha no es valida" << endl;
	}
	else  {
		cout << "la fecha es valida" << endl;
	}

	if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0) {
		cout << "es a" << (char)164 << "o bisiesto" << endl;
	}
	else {
		cout << "no es a" << (char)164 << "o bisiesto" << endl;
	}

	if (anio % 4 == 0 and anio % 100 != 0 or anio % 400 == 0) {
		mes == 2;
		dia == 29;
	}

	//hacer un operador para hacer un incremento de fecha 
	//
  }
			


int main() {
	Fecha Date;
	Date.muestramelafecha();

	int dia_mes(int mes) {
		int = 31;
		if (mes = 4 or mes = 6 or mes = 9 or mes = 11) {
			dia = 30;
		}
		else if (mes == 2) {
			dia = 28;

		}
	}
	
	
		
	return 0;
}
