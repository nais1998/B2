#include <iostream>
using namespace std;
int main()
{
    int ADET_aa, ADET_ma, ADET_da, ADET_an, ADET_mn, ADET_dn, ADET_a, ADET_m, ADET_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> ADET_aa >> ADET_ma >> ADET_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> ADET_an >> ADET_mn >> ADET_dn;

    if (ADET_da > ADET_dn)
    {

        ADET_d = ADET_da - ADET_dn;
    }
    else
    {
        ADET_da = ADET_da + 30;
        ADET_ma = ADET_ma - 1;
        ADET_d = ADET_da - ADET_dn;
    }

    if (ADET_ma > ADET_mn)
    {

        ADET_m = ADET_ma - ADET_mn;
    }
    else
    {

        ADET_ma = ADET_ma + 12;
        ADET_aa = ADET_aa - 1;
        ADET_m = ADET_ma - ADET_mn;
    }
    ADET_a = ADET_aa - ADET_an;

    cout << "Usted tiene " << ADET_a << " años, " << ADET_m << " meses," << ADET_d << " dias" << endl;
    return 0;
}