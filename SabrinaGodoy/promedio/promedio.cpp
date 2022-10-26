#include <iostream>
using namespace std;
int main ()
{
	float SGC_x,SGC_pm=0;
	int SGC_i=0,SGC_l;
	cout<<"Ingrese l: ";cin>>SGC_l;
	do{
	
	cout<<"Ingrese x: ";cin>>SGC_x;
	SGC_i=SGC_i+1;
	if(SGC_x>SGC_pm){
		SGC_pm=SGC_x;
	}
	
	}while(SGC_i<SGC_l);
	cout<<"El promedio maximo del curso es: "<<SGC_pm<<endl;
	return 0;
}