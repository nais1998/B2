#include <iostream>
using namespace std;
int main () 
{
	float DSGS_imc,DSGS_peso,DSGS_altura;
	cout<<"Ingrese el peso (kg): ";cin>>DSGS_peso;
	cout<<"Ingrese la altura (metros): ";cin>>DSGS_altura;
	DSGS_imc=DSGS_peso/(DSGS_altura*DSGS_altura);
	if(DSGS_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DSGS_imc>=18.5 && DSGS_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DSGS_imc>=25 && DSGS_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(DSGS_imc>=27 && DSGS_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(DSGS_imc>=30 && DSGS_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(DSGS_imc>=35 && DSGS_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(DSGS_imc>=40 && DSGS_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(DSGS_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}