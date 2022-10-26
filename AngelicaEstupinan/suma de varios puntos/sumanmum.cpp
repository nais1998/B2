#include<iostream>
using namespace std;

int main () {
    float ADET_x,ADET_s=0.0;
    int ADET_i=0, ADET_l;
    cout<<"Ingrese el valor de l: ";
    cin>>ADET_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>ADET_x;
        ADET_i=ADET_i+1;
        ADET_s=ADET_s+ADET_x;
    }while(ADET_i<ADET_l);

    cout <<"La suma de los numeros fue: "<<ADET_s<<endl;
    return 0;

}