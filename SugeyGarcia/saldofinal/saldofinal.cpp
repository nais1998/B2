#include <iostream>
using namespace std;
int main ()
{
	float DSGS_x,DSGS_s=0;
	int DSGS_i=0,DSGS_l;
	cout<<"Ingrese numero de egresos  ";cin>>DSGS_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>DSGS_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>DSGS_x;
	DSGS_i=DSGS_i+1;
	DSGS_s=DSGS_s-DSGS_x;

	}while(DSGS_i<DSGS_l);
	cout<<"El saldo final es: "<<DSGS_s<<endl;
	return 0;
}