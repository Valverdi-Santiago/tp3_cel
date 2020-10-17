#include "cCelular.h"

cCelular::cCelular() {

}
cCelular::cCelular(bool ant,bool tap,string Hola_mundo,int cant_B,string Tecl,string S_O,string imei,int Vol)
	{
		this->Antena = ant;
		this->Tapa = tap;
		this->pantalla = Hola_mundo;
		this->Cant_Bat = cant_B;
		this->Teclado=Tecl;
		this->S_Operativo=S_O;
		this->IMEI=imei;
		this->Volumen=Vol;
}

 void cCelular::Sonar()
{
	cout << "Sonando..." << endl;
}

 void cCelular::Imprimir()
 {
	 if(Antena)
	cout << "Antena abierta" <<endl;
	 else
	 {
		 cout << "Antena cerrada" << endl;
	 }
	 if(Tapa)
		 cout << "Tapa abierta" << endl;
	 else
	 {
		 cout << "Tapa cerrada" << endl;
	 }
	 cout << "Pantalla: " << pantalla << endl;
	 cout << "Cantidad de Bateria: " << Cant_Bat << endl;
	 cout << "Teclado: " << Teclado << endl;
	 cout << "Sistema Operativo: " << S_Operativo << endl;
	 cout << "IMEI: " << IMEI << endl;
	 cout << "Volumen: " << Volumen << endl;
 }

 
