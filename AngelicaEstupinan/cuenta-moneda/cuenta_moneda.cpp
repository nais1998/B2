#include <iostream>
using namespace std;
int main ()
{
	float ADET_x,ADET_s=0,ADET_s1=0,ADET_s5=0;
	int ADET_i=0,ADET_l,ADET_i1=0,ADET_i5=0;
	cout<<"Ingrese l: ";cin>>ADET_l;
	do{

	cout<<"Ingrese x: ";cin>>ADET_x;
	ADET_i=ADET_i+1;
	ADET_s=ADET_s+ADET_x;
	if(ADET_x==1){
		ADET_i1=ADET_i1+1;
		ADET_s1=ADET_s1+ADET_x;
	}else{

		ADET_i5=ADET_i5+1;
		ADET_s5=ADET_s5+ADET_x;
	}

	}while(ADET_i<ADET_l);
	cout<<"La cantidad de monedas es: "<<ADET_i<<endl;
	cout<<"El valor es: "<<ADET_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<ADET_i1<<endl;
	cout<<"El valor es: "<<ADET_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<ADET_i5<<endl;
	cout<<"La cantidad de moneda es: "<<ADET_s5<<endl;
	return 0;
}