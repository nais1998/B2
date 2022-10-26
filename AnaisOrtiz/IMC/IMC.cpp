#include <iostream>
using namespace std;
int main () 
{
	float ASNO_imc,ASNO_peso,ASNO_altura;
	cout<<"Ingrese el peso (kg): ";cin>>ASNO_peso;
	cout<<"Ingrese la altura (metros): ";cin>>ASNO_altura;
	ASNO_imc=ASNO_peso/(ASNO_altura*ASNO_altura);
	if(ASNO_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(ASNO_imc>=18.5 && ASNO_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(ASNO_imc>=25 && ASNO_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(ASNO_imc>=27 && ASNO_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(ASNO_imc>=30 && ASNO_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(ASNO_imc>=35 && ASNO_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(ASNO_imc>=40 && ASNO_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(ASNO_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}