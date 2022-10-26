#include <iostream>
using namespace std;
int main ()
{
	float KYCA_x,KYCA_s=0;
	int KYCA_i=0,KYCA_l;
	cout<<"Ingrese numero de egresos  ";cin>>KYCA_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>KYCA_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>KYCA_x;
	KYCA_i=KYCA_i+1;
	KYCA_s=KYCA_s-KYCA_x;

	}while(KYCA_i<KYCA_l);
	cout<<"El saldo final es: "<<KYCA_s<<endl;
	return 0;
}