#pragma once
#include <iostream>
using namespace std;

class cTelefono
{
protected:
	
	string pantalla;
	int Cant_Bat;
	string Teclado;
	string S_Operativo;
	string IMEI;
	int Volumen;
public:
	cTelefono() ;
	~cTelefono();
	virtual void Sonar() {};
	virtual void Imprimir() {};
	void Decrementar();
	void Incrementar();
};

