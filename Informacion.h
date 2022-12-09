#ifndef INFORMACION_H
#define INFORMACION_H
#include "Cliente.h"
class Informacion {
public:
	Informacion();
	Informacion(int,int,int,bool,float);
	virtual ~Informacion();
	void setNumAdultos(int *NumAdultos);
	void setNumNinos(int *NumNinos);
	void setNumDias(int *NumDias);
	void setTdIncl(bool *TdIncl);
	int getNumAdultos();
	int getNumNinos();
	int getNumDias();
	bool getTdIncl();
	void DatosI();
	int Pago();
	void setEntrada(float *Entrada);
	float getEntrada();
private:
	int *NumAdultos;
	int *NumNinos;
	int *NumDias;
	bool *TdIncl=0;
	float *Entrada;
};

#endif
