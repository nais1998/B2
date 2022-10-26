#include <iostream>
using namespace std;
int main ()
{
	float SGC_x,SGC_s=0;
	int SGC_i=0,SGC_l;
	cout<<"Ingrese numero de egresos  ";cin>>SGC_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>SGC_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>SGC_x;
	SGC_i=SGC_i+1;
	SGC_s=SGC_s-SGC_x;

	}while(SGC_i<SGC_l);
	cout<<"El saldo final es: "<<SGC_s<<endl;
	return 0;
}