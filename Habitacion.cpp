#include "Habitacion.h"

Habitacion::Habitacion() {
	this->Ide=Ide;
	this->Estado=Estado;
}
Habitacion::~Habitacion(){
	delete Ide;
	delete Estado;
}
void Habitacion::setEstado(char *Estado){
	this->Estado=Estado;
}
char Habitacion::getEstado(){
	*Estado='D';
	return *Estado;
}

