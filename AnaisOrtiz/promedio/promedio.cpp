#include <iostream>
using namespace std;
int main ()
{
	float ASNO_x,ASNO_pm=0;
	int ASNO_i=0,ASNO_l;
	cout<<"Ingrese l: ";cin>>ASNO_l;
	do{
	
	cout<<"Ingrese x: ";cin>>ASNO_x;
	ASNO_i=ASNO_i+1;
	if(ASNO_x>ASNO_pm){
		ASNO_pm=ASNO_x;
	}
	
	}while(ASNO_i<ASNO_l);
	cout<<"El promedio maximo del curso es: "<<ASNO_pm<<endl;
	return 0;
}