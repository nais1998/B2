#include <iostream>
using namespace std;
int main()
{
    int KYCA_aa, KYCA_ma, KYCA_da, KYCA_an, KYCA_mn, KYCA_dn, KYCA_a, KYCA_m, KYCA_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> KYCA_aa >> KYCA_ma >> KYCA_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> KYCA_an >> KYCA_mn >> KYCA_dn;

    if (KYCA_da > KYCA_dn)
    {

        KYCA_d = KYCA_da - KYCA_dn;
    }
    else
    {
        KYCA_da = KYCA_da + 30;
        KYCA_ma = KYCA_ma - 1;
        KYCA_d = KYCA_da - KYCA_dn;
    }

    if (KYCA_ma > KYCA_mn)
    {

        KYCA_m = KYCA_ma - KYCA_mn;
    }
    else
    {

        KYCA_ma = KYCA_ma + 12;
        KYCA_aa = KYCA_aa - 1;
        KYCA_m = KYCA_ma - KYCA_mn;
    }
    KYCA_a = KYCA_aa - KYCA_an;

    cout << "Usted tiene " << KYCA_a << " años, " << KYCA_m << " meses," << KYCA_d << " dias" << endl;
    return 0;
}