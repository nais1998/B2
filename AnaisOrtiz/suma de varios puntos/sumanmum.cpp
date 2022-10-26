#include<iostream>
using namespace std;

int main () {
    float ASNO_x,ASNO_s=0.0;
    int ASNO_i=0, ASNO_l;
    cout<<"Ingrese el valor de l: ";
    cin>>ASNO_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>ASNO_x;
        ASNO_i=ASNO_i+1;
        ASNO_s=ASNO_s+ASNO_x;
    }while(ASNO_i<ASNO_l);

    cout <<"La suma de los numeros fue: "<<ASNO_s<<endl;
    return 0;

}