#include <iostream>
using namespace std;
int main ()
{
	float DSGS_x,DSGS_pm=0;
	int DSGS_i=0,DSGS_l;
	cout<<"Ingrese l: ";cin>>DSGS_l;
	do{
	
	cout<<"Ingrese x: ";cin>>DSGS_x;
	DSGS_i=DSGS_i+1;
	if(DSGS_x>DSGS_pm){
		DSGS_pm=DSGS_x;
	}
	
	}while(DSGS_i<DSGS_l);
	cout<<"El promedio maximo del curso es: "<<DSGS_pm<<endl;
	return 0;
}