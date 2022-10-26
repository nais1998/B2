#include <iostream>
using namespace std;
int main ()
{
	float ASNO_x,ASNO_s=0;
	int ASNO_i=0,ASNO_l;
	cout<<"Ingrese numero de egresos  ";cin>>ASNO_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>ASNO_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>ASNO_x;
	ASNO_i=ASNO_i+1;
	ASNO_s=ASNO_s-ASNO_x;

	}while(ASNO_i<ASNO_l);
	cout<<"El saldo final es: "<<ASNO_s<<endl;
	return 0;
}