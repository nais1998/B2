#include<iostream>
using namespace std;

int main () {
    float SGC_x,SGC_s=0.0;
    int SGC_i=0, SGC_l;
    cout<<"Ingrese el valor de l: ";
    cin>>SGC_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>SGC_x;
        SGC_i=SGC_i+1;
        SGC_s=SGC_s+SGC_x;
    }while(SGC_i<SGC_l);

    cout <<"La suma de los numeros fue: "<<SGC_s<<endl;
    return 0;

}