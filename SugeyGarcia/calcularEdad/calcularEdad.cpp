#include <iostream>
using namespace std;
int main()
{
    int DSGS_aa, DSGS_ma, DSGS_da, DSGS_an, DSGS_mn, DSGS_dn, DSGS_a, DSGS_m, DSGS_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> DSGS_aa >> DSGS_ma >> DSGS_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> DSGS_an >> DSGS_mn >> DSGS_dn;

    if (DSGS_da > DSGS_dn)
    {

        DSGS_d = DSGS_da - DSGS_dn;
    }
    else
    {
        DSGS_da = DSGS_da + 30;
        DSGS_ma = DSGS_ma - 1;
        DSGS_d = DSGS_da - DSGS_dn;
    }

    if (DSGS_ma > DSGS_mn)
    {

        DSGS_m = DSGS_ma - DSGS_mn;
    }
    else
    {

        DSGS_ma = DSGS_ma + 12;
        DSGS_aa = DSGS_aa - 1;
        DSGS_m = DSGS_ma - DSGS_mn;
    }
    DSGS_a = DSGS_aa - DSGS_an;

    cout << "Usted tiene " << DSGS_a << " años, " << DSGS_m << " meses," << DSGS_d << " dias" << endl;
    return 0;
}