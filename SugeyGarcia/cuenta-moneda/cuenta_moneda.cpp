#include <iostream>
using namespace std;
int main ()
{
	float DSGS_x,DSGS_s=0,DSGS_s1=0,DSGS_s5=0;
	int DSGS_i=0,DSGS_l,DSGS_i1=0,DSGS_i5=0;
	cout<<"Ingrese l: ";cin>>DSGS_l;
	do{

	cout<<"Ingrese x: ";cin>>DSGS_x;
	DSGS_i=DSGS_i+1;
	DSGS_s=DSGS_s+DSGS_x;
	if(DSGS_x==1){
		DSGS_i1=DSGS_i1+1;
		DSGS_s1=DSGS_s1+DSGS_x;
	}else{

		DSGS_i5=DSGS_i5+1;
		DSGS_s5=DSGS_s5+DSGS_x;
	}

	}while(DSGS_i<DSGS_l);
	cout<<"La cantidad de monedas es: "<<DSGS_i<<endl;
	cout<<"El valor es: "<<DSGS_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<DSGS_i1<<endl;
	cout<<"El valor es: "<<DSGS_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<DSGS_i5<<endl;
	cout<<"La cantidad de moneda es: "<<DSGS_s5<<endl;
	return 0;
}