#ifndef HABITACION_H
#define HABITACION_H
#include "Cliente.h"
#include "Informacion.h"
#include "Contenedora.h"
class Habitacion {
public:
	Habitacion();
	virtual ~Habitacion();
	void  setEstado(char *Estado);
	char getEstado();
	void setIde(int *Ide);
	int getIde();
	
private:
	int *Ide;
	char *Estado;
	
};

#endif

