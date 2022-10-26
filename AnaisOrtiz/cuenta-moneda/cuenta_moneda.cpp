#include <iostream>
using namespace std;
int main ()
{
	float ASNO_x,ASNO_s=0,ASNO_s1=0,ASNO_s5=0;
	int ASNO_i=0,ASNO_l,ASNO_i1=0,ASNO_i5=0;
	cout<<"Ingrese l: ";cin>>ASNO_l;
	do{

	cout<<"Ingrese x: ";cin>>ASNO_x;
	ASNO_i=ASNO_i+1;
	ASNO_s=ASNO_s+ASNO_x;
	if(ASNO_x==1){
		ASNO_i1=ASNO_i1+1;
		ASNO_s1=ASNO_s1+ASNO_x;
	}else{

		ASNO_i5=ASNO_i5+1;
		ASNO_s5=ASNO_s5+ASNO_x;
	}

	}while(ASNO_i<ASNO_l);
	cout<<"La cantidad de monedas es: "<<ASNO_i<<endl;
	cout<<"El valor es: "<<ASNO_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<ASNO_i1<<endl;
	cout<<"El valor es: "<<ASNO_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<ASNO_i5<<endl;
	cout<<"La cantidad de moneda es: "<<ASNO_s5<<endl;
	return 0;
}