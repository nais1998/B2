#include<iostream>
using namespace std;

int main () {
    float DSGS_x,DSGS_s=0.0;
    int DSGS_i=0, DSGS_l;
    cout<<"Ingrese el valor de l: ";
    cin>>DSGS_l;
    do{
        cout<<"Ingrese el valor de x: ";
        cin>>DSGS_x;
        DSGS_i=DSGS_i+1;
        DSGS_s=DSGS_s+DSGS_x;
    }while(DSGS_i<DSGS_l);

    cout <<"La suma de los numeros fue: "<<DSGS_s<<endl;
    return 0;

}