#ifndef CONTENEDORA_H
#define CONTENEDORA_H
#include "Cliente.h"
#include "Informacion.h"
#include "Habitacion.h"

class Contenedora {
public:
	Contenedora();
	Contenedora(char **mat );
	~Contenedora();
	void menu();
private:
	char mat[5][10];
	Informacion mati[5][10];
	Cliente matc[5][10];
	Cliente *U=new Cliente;
	Informacion *I=new Informacion;
	
};

#endif

