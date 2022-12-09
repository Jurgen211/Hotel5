#include "Contenedora.h"


Contenedora::Contenedora() {
for (int i=0;i<5;i++){
	for (int j=0;j<10;j++){
		mat[i][j]='D';}
	}
}

Contenedora::~Contenedora() {
}

void Contenedora::menu(){


for(;;){
	int opc;
	system ("cls");
	cout<<"		->    MENU    <-"
		<<"\n"
		<<"\n"
	<<"Digite el numero correspondiente a lo que necesita"
    <<"\n"
    <<"1- Cuantas habitaciones estan libres\n"
	<<"2- Cuantas habitaciones estan en mantenimiento\n"
    <<"3- Cuantas habitaciones estan ocupadas\n"
	<<"4- Ingresar Cliente\n"
	<<"5- Liberar Habitacion\n"
	<<"6- Cuantas Personas adultas hay en el Hotel\n"
	<<"7- Cuantas Ninos hay en el hotel\n"
	<<"8- Saber cual es la recaudacion del hotel hoy\n"
	<<"9- Vista general del edifio\n"
	<<"10- Salir\n";
cin>>opc;

switch(opc){system ("cls");
case 1:{
	int l=0;
	for (int i=0;i<5;i++){
		for (int j=0;j<10;j++){
		if(mat[i][j]=='D'){
			l++;
		}}}
	cout<<"Hay "<<l<<" haboitaciones disponibles";
	cout<<endl;
	cout<<"\n"<<"\n";
	system ("pause");
	
	
	
	
	break;
	
}
case 2:{
		int l=0;
		for (int i=0;i<5;i++){
			for (int j=0;j<10;j++){
				if(mat[i][j]=='M'){
					l++;
				}
				}}
cout<<"Hay "<<l<<" haboitaciones 0cupadas";
				cout<<endl;
				cout<<"\n"<<"\n";
				system ("pause");
				
break;
}
case 3:{
			int l=0;
			for (int i=0;i<5;i++){
				for (int j=0;j<10;j++){
					if(mat[i][j]=='O'){
						l++;
					}}}
			cout<<"Hay "<<l<<" haboitaciones disponibles";
			cout<<endl;
			cout<<"\n"<<"\n";
			system ("pause");
	
break;
}
case 4:{
	
int Pis,Hab;
cout<<"Digite Piso que deseao "<<endl;
cin>>Pis;
cout<<"digite HAbitacion que desea"<<endl;
cin>>Hab;

for(int i=0;i<5;i++){
	for(int j=0;j<10;j++){
		if(mat[Pis][Hab]=='D'){
		matc[Pis][Hab].DatosC();
		mati[Pis][Hab].DatosI();
		mati[Pis][Hab].Pago();
		cout<<"Su monto a pagar es :$"<<mati[Pis][Hab].Pago()<<endl;
		mat[Pis][Hab]='O';
		
		}break;
		
		cout<<"\n"<<"\n";
		system ("pause");
		
	}
}
break;
}
case 5:{
	string ced="";
	cout<<"Digite Cedula"<<endl;
	cin>>ced;
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			if(matc[i][j].getCedula()==ced){
				mat[i][j]='D';
	}}cout<<endl;}
	cout<<"\n"<<"\n";
	system ("pause");
	
break;
}
case 6:{
		int g=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<10;j++){
				if(mat[i][j]=='O'){
					mati[i][j].getNumAdultos();
					g+=mati[i][j].getNumAdultos();
					
			}
		}}cout<<"el numero de adultos es "<<g<<endl;
		cout<<"\n"<<"\n";
		system ("pause");
	
break;
}
case 7:{

			int g=0;
			for(int i=0;i<5;i++){
				for(int j=0;j<10;j++){
					if(mat[i][j]=='O'){
						mati[i][j].getNumNinos();
						g+=mati[i][j].getNumNinos();
					}
				}}cout<<"el numero de ninos es "<<g<<endl;
			cout<<"\n"<<"\n";
			system ("pause");
			
break;
}
case 8:{
	int opc;
cout<<"1- Total de Todo Incluido\n"
	<<"2- Total de Sin Todo Incluido\n"
	<<"3- Total General\n";
	cin>>opc;
	switch(opc){
	case 1:{
		int l=0;
		for(int i=0;i<5;i++){
			for(int j=0;j<10;j++){
			
		if((mat[i][j]=='O')&&(mati[i][j].getTdIncl()==true)){
	    mati[i][j].Pago();
			l+=mati[i][j].Pago();
			
		}}}cout<<l<<endl;break;
	}
	case 2:{
			int l=0;
			for(int i=0;i<5;i++){
				for(int j=0;j<10;j++){
					
					if((mat[i][j]=='O')&&(mati[i][j].getTdIncl()==false)){
						mati[i][j].Pago();
						l+=mati[i][j].Pago();
						
					}}}cout<<l<<endl;break;
	}
	case 3:{
				int l=0;
				for(int i=0;i<5;i++){
					for(int j=0;j<10;j++){
						
						if(mat[i][j]=='O'){
							mati[i][j].Pago();
							l+=mati[i][j].Pago();
							
						}}}cout<<l<<endl;break;
	}
				cout<<"\n"<<"\n";
				system ("pause");
				
break;
}}
case 9:{
		for (int i=0;i<5;i++){
			for (int j=0;j<10;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;}
		
		
		cout<<"\n"<<"\n";
		system ("pause");
		
		break;
		
}
case 10:{
	
	cout<<"Hasta luego :)\n";
	system("Pause");
	exit(0);
	cout<<"\n"<<"\n";
	system ("pause");
	break;}
}}}
