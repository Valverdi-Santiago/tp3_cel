#pragma once
#include "cTelefono.h"
class cCelular :
	public cTelefono
{private:
	bool Tapa;
	bool Antena;
public:
	cCelular();
	cCelular(bool ant, bool tap, string Hola_mundo, int cant_B, string Tecl, string S_O, string imei, int Vol);
	
	~cCelular() {
	};
	virtual void Sonar();
	void Imprimir();
	
};

