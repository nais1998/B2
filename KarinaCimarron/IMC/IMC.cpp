#include <iostream>
using namespace std;
int main () 
{
	float KYCA_imc,KYCA_peso,KYCA_altura;
	cout<<"Ingrese el peso (kg): ";cin>>KYCA_peso;
	cout<<"Ingrese la altura (metros): ";cin>>KYCA_altura;
	KYCA_imc=KYCA_peso/(KYCA_altura*KYCA_altura);
	if(KYCA_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(KYCA_imc>=18.5 && KYCA_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(KYCA_imc>=25 && KYCA_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(KYCA_imc>=27 && KYCA_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(KYCA_imc>=30 && KYCA_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(KYCA_imc>=35 && KYCA_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(KYCA_imc>=40 && KYCA_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(KYCA_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}