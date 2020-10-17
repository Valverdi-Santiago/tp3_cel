#pragma once
#include <iostream>
#include "cCelular.h"
#include "cTelefono.h"
#include "cSmartPhone.h"
#define Tam 10
using namespace std;
int main()
{
	cTelefono** Telefonos;
	Telefonos = new cTelefono * [Tam];
	for (int i = 0; i < Tam; i++) { Telefonos[i] = NULL; }
	
	cCelular* cel = new cCelular(true, true, "HOLA",8,"a","","ime",30);
	Telefonos[0] = cel;
	Telefonos[0]->Sonar();
	
	cSmartPhone* smart = new cSmartPhone(40,true,"Mundo",100, "Tecladito", "Android", "pepito", 50);
	Telefonos[1] = smart;
	Telefonos[1]->Sonar();
	Telefonos[0]->Incrementar();
	Telefonos[0]->Imprimir();
	
	
	for (int i = 0; i < Tam; i++)delete Telefonos[i];
	
	delete[]Telefonos;
	system("pause");
}







