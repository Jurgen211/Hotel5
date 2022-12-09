#ifndef CLIENTE_H
#define CLIENTE_H
#include "iostream"
#include "sstream"
using namespace std;
class Cliente {
public:
	Cliente();
	Cliente(string *Nombre,int *Edad,string,string,int);
	string getNombre();
	int getEdad();
	string getCedula();
	string getFormaPago();
	int getNCuenta();
	void setNombre(string *Nombre);
	void setEdad(int *Edad);
	void setCedula(string *Cedula);
	void setFormaPago(string *FormaPago);
	void setNCuenta(int *Ncuenta);
	
	
	void DatosC();
	~Cliente();
private:
	string *Nombre;
	int *Edad;
	string *Cedula;
	string *FormaPago;
	int *NCuenta;
	
};

#endif

