#include <iostream>
using namespace std;
int main () 
{
	float ADET_imc,ADET_peso,ADET_altura;
	cout<<"Ingrese el peso (kg): ";cin>>ADET_peso;
	cout<<"Ingrese la altura (metros): ";cin>>ADET_altura;
	ADET_imc=ADET_peso/(ADET_altura*ADET_altura);
	if(ADET_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(ADET_imc>=18.5 && ADET_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(ADET_imc>=25 && ADET_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(ADET_imc>=27 && ADET_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(ADET_imc>=30 && ADET_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(ADET_imc>=35 && ADET_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(ADET_imc>=40 && ADET_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(ADET_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}