#pragma once
#include "cTelefono.h"
class cSmartPhone :
	public cTelefono
{
private:
	int Cant_App;
	bool Con_Int;
public:
	cSmartPhone() {};
	cSmartPhone(int N, bool con_int, string Hola_mundo, int cant_B, string Tecl, string S_O, string imei, int Vol);
	~cSmartPhone() {};
	void Imprimir();
	void Sonar();
};

