#include <iostream>
using namespace std;
int main ()
{
	float KYCA_x,KYCA_pm=0;
	int KYCA_i=0,KYCA_l;
	cout<<"Ingrese l: ";cin>>KYCA_l;
	do{
	
	cout<<"Ingrese x: ";cin>>KYCA_x;
	KYCA_i=KYCA_i+1;
	if(KYCA_x>KYCA_pm){
		KYCA_pm=KYCA_x;
	}
	
	}while(KYCA_i<KYCA_l);
	cout<<"El promedio maximo del curso es: "<<KYCA_pm<<endl;
	return 0;
}