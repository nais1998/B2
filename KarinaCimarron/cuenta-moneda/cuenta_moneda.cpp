#include <iostream>
using namespace std;
int main ()
{
	float KYCA_x,KYCA_s=0,KYCA_s1=0,KYCA_s5=0;
	int KYCA_i=0,KYCA_l,KYCA_i1=0,KYCA_i5=0;
	cout<<"Ingrese l: ";cin>>KYCA_l;
	do{

	cout<<"Ingrese x: ";cin>>KYCA_x;
	KYCA_i=KYCA_i+1;
	KYCA_s=KYCA_s+KYCA_x;
	if(KYCA_x==1){
		KYCA_i1=KYCA_i1+1;
		KYCA_s1=KYCA_s1+KYCA_x;
	}else{

		KYCA_i5=KYCA_i5+1;
		KYCA_s5=KYCA_s5+KYCA_x;
	}

	}while(KYCA_i<KYCA_l);
	cout<<"La cantidad de monedas es: "<<KYCA_i<<endl;
	cout<<"El valor es: "<<KYCA_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<KYCA_i1<<endl;
	cout<<"El valor es: "<<KYCA_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<KYCA_i5<<endl;
	cout<<"La cantidad de moneda es: "<<KYCA_s5<<endl;
	return 0;
}