#include <iostream>
using namespace std;
int main()
{
    int SGC_aa, SGC_ma, SGC_da, SGC_an, SGC_mn, SGC_dn, SGC_a, SGC_m, SGC_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> SGC_aa >> SGC_ma >> SGC_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> SGC_an >> SGC_mn >> SGC_dn;

    if (SGC_da > SGC_dn)
    {

        SGC_d = SGC_da - SGC_dn;
    }
    else
    {
        SGC_da = SGC_da + 30;
        SGC_ma = SGC_ma - 1;
        SGC_d = SGC_da - SGC_dn;
    }

    if (SGC_ma > SGC_mn)
    {

        SGC_m = SGC_ma - SGC_mn;
    }
    else
    {

        SGC_ma = SGC_ma + 12;
        SGC_aa = SGC_aa - 1;
        SGC_m = SGC_ma - SGC_mn;
    }
    SGC_a = SGC_aa - SGC_an;

    cout << "Usted tiene " << SGC_a << " años, " << SGC_m << " meses," << SGC_d << " dias" << endl;
    return 0;
}