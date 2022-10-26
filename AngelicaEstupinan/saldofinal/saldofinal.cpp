#include <iostream>
using namespace std;
int main ()
{
	float ADET_x,ADET_s=0;
	int ADET_i=0,ADET_l;
	cout<<"Ingrese numero de egresos  ";cin>>ADET_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>ADET_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>ADET_x;
	ADET_i=ADET_i+1;
	ADET_s=ADET_s-ADET_x;

	}while(ADET_i<ADET_l);
	cout<<"El saldo final es: "<<ADET_s<<endl;
	return 0;
}