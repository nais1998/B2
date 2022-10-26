#include <iostream>
using namespace std;
int main ()
{
	float ADET_x,ADET_pm=0;
	int ADET_i=0,ADET_l;
	cout<<"Ingrese l: ";cin>>ADET_l;
	do{
	
	cout<<"Ingrese x: ";cin>>ADET_x;
	ADET_i=ADET_i+1;
	if(ADET_x>ADET_pm){
		ADET_pm=ADET_x;
	}
	
	}while(ADET_i<ADET_l);
	cout<<"El promedio maximo del curso es: "<<ADET_pm<<endl;
	return 0;
}