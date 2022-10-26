#include<iostream>
using namespace std;

int main () {
    float KYCA_x,KYCA_s=0.0;
    int KYCA_i=0, KYCA_l;
    cout<<"Ingrese el valor de l: ";
    cin>>KYCA_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>KYCA_x;
        KYCA_i=KYCA_i+1;
        KYCA_s=KYCA_s+KYCA_x;
    }while(KYCA_i<KYCA_l);

    cout <<"La suma de los numeros fue: "<<KYCA_s<<endl;
    return 0;

}