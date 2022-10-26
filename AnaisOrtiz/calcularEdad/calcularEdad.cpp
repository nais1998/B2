#include <iostream>
using namespace std;
int main()
{
    int ASNO_aa, ASNO_ma, ASNO_da, ASNO_an, ASNO_mn, ASNO_dn, ASNO_a, ASNO_m, ASNO_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> ASNO_aa >> ASNO_ma >> ASNO_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> ASNO_an >> ASNO_mn >> ASNO_dn;

    if (ASNO_da > ASNO_dn)
    {

        ASNO_d = ASNO_da - ASNO_dn;
    }
    else
    {
        ASNO_da = ASNO_da + 30;
        ASNO_ma = ASNO_ma - 1;
        ASNO_d = ASNO_da - ASNO_dn;
    }

    if (ASNO_ma > ASNO_mn)
    {

        ASNO_m = ASNO_ma - ASNO_mn;
    }
    else
    {

        ASNO_ma = ASNO_ma + 12;
        ASNO_aa = ASNO_aa - 1;
        ASNO_m = ASNO_ma - ASNO_mn;
    }
    ASNO_a = ASNO_aa - ASNO_an;

    cout << "Usted tiene " << ASNO_a << " años, " << ASNO_m << " meses," << ASNO_d << " dias" << endl;
    return 0;
}