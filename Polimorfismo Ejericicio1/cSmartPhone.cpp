#include "cSmartPhone.h"

cSmartPhone::cSmartPhone(int N, bool con_int, string Hola_mundo, int cant_B, string Tecl, string S_O, string imei, int Vol)
{
	this->Cant_App = N;
	this->Con_Int = con_int;
	this->pantalla = Hola_mundo;
	this->Cant_Bat = cant_B;
	this->Teclado = Tecl;
	this->S_Operativo = S_O;
	this->IMEI = imei;
	this->Volumen = Vol;
}

void cSmartPhone::Imprimir()
{
	cout << "Numero de aplicaciones: " << Cant_App << endl;
	if (Con_Int)
		cout << "Internet Conectado" << endl;
	else
	{
		cout << "No hay conexion a internet" << endl;
	}

	cout << "Pantalla: " << pantalla << endl;
	cout << "Cantidad de Bateria: " << Cant_Bat << endl;
	cout << "Teclado: " << Teclado << endl;
	cout << "Sistema Operativo: " << S_Operativo << endl;
	cout << "IMEI: " << IMEI << endl;
	cout << "Volumen: " << Volumen << endl;
}

void cSmartPhone::Sonar()
{
	cout << "Ring..." << endl;
}
