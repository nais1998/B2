#include <iostream>
using namespace std;
int main ()
{
	float SGC_x,SGC_s=0,SGC_s1=0,SGC_s5=0;
	int SGC_i=0,SGC_l,SGC_i1=0,SGC_i5=0;
	cout<<"Ingrese l: ";cin>>SGC_l;
	do{

	cout<<"Ingrese x: ";cin>>SGC_x;
	SGC_i=SGC_i+1;
	SGC_s=SGC_s+SGC_x;
	if(SGC_x==1){
		SGC_i1=SGC_i1+1;
		SGC_s1=SGC_s1+SGC_x;
	}else{

		SGC_i5=SGC_i5+1;
		SGC_s5=SGC_s5+SGC_x;
	}

	}while(SGC_i<SGC_l);
	cout<<"La cantidad de monedas es: "<<SGC_i<<endl;
	cout<<"El valor es: "<<SGC_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<SGC_i1<<endl;
	cout<<"El valor es: "<<SGC_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<SGC_i5<<endl;
	cout<<"La cantidad de moneda es: "<<SGC_s5<<endl;
	return 0;
}