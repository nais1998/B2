#include <iostream>
using namespace std;
int main () 
{
	float SGC_imc,SGC_peso,SGC_altura;
	cout<<"Ingrese el peso (kg): ";cin>>SGC_peso;
	cout<<"Ingrese la altura (metros): ";cin>>SGC_altura;
	SGC_imc=SGC_peso/(SGC_altura*SGC_altura);
	if(SGC_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(SGC_imc>=18.5 && SGC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(SGC_imc>=25 && SGC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(SGC_imc>=27 && SGC_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(SGC_imc>=30 && SGC_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(SGC_imc>=35 && SGC_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(SGC_imc>=40 && SGC_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(SGC_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}