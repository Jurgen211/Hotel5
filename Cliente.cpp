#include "Cliente.h"

Cliente::Cliente() {
	this->Nombre=new string;
	this->Edad=new int;
	this->Cedula=new string;
	this->FormaPago= new string;
	this->NCuenta= new int;
}

Cliente::~Cliente(){
	delete Nombre;
	delete Edad;
	delete Cedula;
	delete FormaPago;
	delete NCuenta;
}
Cliente::Cliente(string *Nombre,int *Edad,string,string,int){
	this->Nombre=Nombre;
	this->Edad=Edad;
	this->Cedula=Cedula;
	this->FormaPago=FormaPago;
	this->NCuenta=NCuenta;
}
string Cliente::getNombre(){
	return *Nombre;
}
int Cliente::getEdad(){
	return *Edad;
}
string Cliente::getCedula(){
	return *Cedula;
}
string Cliente::getFormaPago(){
	return *FormaPago;
}
int Cliente::getNCuenta(){
	return *NCuenta;
}
void Cliente::setNombre(string *Nombre){
	this->Nombre=Nombre;
}
void Cliente::setEdad(int *Edad){
	this->Edad=Edad;
}
void Cliente::setCedula(string *Cedula){
	this->Cedula=Cedula;
}
void Cliente::setFormaPago(string *FormaPago){
	this->FormaPago=FormaPago;
}
void Cliente::setNCuenta(int *NCuenta){
	this->NCuenta=NCuenta;
}




void Cliente::DatosC(){
	int opc;

	cout<<"Ingrese su nombre\n";
	cin>>*Nombre;
	cout<<"Digite su numero de telefono\n";
	cin>>*Edad;
	cout<<"Digite su ID\n";
	cin>>*Cedula;
	cout<<"Digite su metodo de pago\n"
		<<"1-Efectivo\n"
		<<"2-Tarjeta de debito\n"
		<<"3-Tarjeta de Credito\n";
		cin>>opc;
	if(opc=1){
		*FormaPago="Efectivo\n";
		
	}
	if(opc=2){
		*FormaPago="Tarjeta de Debito\n";
		
	}
	if(opc=3){
		*FormaPago="Tarjeta de Credito\n";
		
	}
	cout<<"Ingrese su numero de cuenta\n";
	cin>>*NCuenta;
	
}
