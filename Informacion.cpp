#include "Informacion.h"
#include "Cliente.h"
Informacion::Informacion() {
	NumAdultos=new int;
	NumNinos=new int;
	NumDias=new int;
	TdIncl=new bool;
	Entrada=new float;
}

Informacion::Informacion(int,int,int,bool,float) {
	this->NumAdultos=NumAdultos;
	this->NumNinos=NumNinos;
	this->NumDias=NumDias;
	this->TdIncl=TdIncl;
	this->Entrada=Entrada;
}
Informacion::~Informacion() {
	delete NumAdultos;
	delete NumNinos;
	delete NumDias;
	delete TdIncl;
	delete Entrada;
}
void Informacion::setNumAdultos(int *NumAdultos){
	this->NumAdultos=NumAdultos;
}
void Informacion::setNumNinos(int *NumNinos){
	this->NumNinos=NumNinos;
}
void Informacion::setNumDias(int *NumDias){
	this->NumDias=NumDias;
}
void Informacion::setTdIncl(bool *TdIncl){
	this -> TdIncl=TdIncl;
}
void Informacion::setEntrada(float *Entrada){
	this -> Entrada=Entrada;
}
int Informacion::getNumAdultos(){
	return *NumAdultos;
}
int Informacion::getNumNinos(){
	return *NumNinos;
}
int Informacion::getNumDias(){
	return *NumDias;
}
bool Informacion::getTdIncl(){
	return *TdIncl;
}
float Informacion::getEntrada(){
	return *Entrada;
}
void Informacion::DatosI(){
	cout<<"Digite el numero de adultos\n";
	cin>>*NumAdultos;
	cout<<"Digite el numero de ninos\n";
	cin>>*NumNinos;
	cout<<"Digite el numero de dias que se va a hospedar\n";
	cin>>*NumDias;
	cout<<"Ingrese la hora de entrada\n";
	cin>>*Entrada;
	cout<<"Digite 1 si desea todo incluido y 0  no\n";
	cin>>*TdIncl;
	
}  
int Informacion::Pago(){
	int P=0;
	P=*NumAdultos+*NumNinos;
	float c=0;
	int Adult=300;
	int Nin=200;
	if(*Entrada>19&&P==1&&*TdIncl==0){
		c=112.5**NumDias;
	}
	if(*Entrada<19&&P==1&&*TdIncl==0){
		c=150**NumDias;
	}
	else if(*Entrada>19&&P==2&&*TdIncl==0){
		c=200**NumDias;
	}
	else if(*Entrada<19&&P==2&&*TdIncl==0){
		c=250**NumDias;
	}
	else if(*Entrada>19&&P==3&&*TdIncl==0){
		c=297.5**NumDias;
	}
	else if(*Entrada<19&&P==3&&*TdIncl==0){
		c=350**NumDias;
	}
	else if(*Entrada>19&&P>=4&&*TdIncl==0){
		c=360**NumDias;
	}
	else if(*Entrada<19&&P>=4&&*TdIncl==0){
		c=400**NumDias;
	}
	else if(*TdIncl==1){
		c=((*NumAdultos*Adult)+(*NumNinos*Nin))**NumDias;
		
	}
	
	return c;
}
