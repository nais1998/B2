
#include <iostream>
using namespace std;
int main()
{
    float DSGS_x, DSGS_s = 0, DSGS_vb, DSGS_piva = 12, DSGS_viva, DSGS_pdesc = 10, DSGS_vdesc, DSGS_vn;
    int DSGS_i = 0, DSGS_l;
    cout << "Ingrese l: ";
    cin >> DSGS_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> DSGS_x;
        DSGS_i = DSGS_i + 1;
        DSGS_s = DSGS_s + DSGS_x;
    } while (DSGS_i < DSGS_l);
    DSGS_vb = DSGS_s;
    DSGS_viva = DSGS_vb * DSGS_piva / 100;
    DSGS_vdesc = DSGS_vb * DSGS_pdesc / 100;
    DSGS_vn = DSGS_vb + DSGS_viva - DSGS_vdesc;
    cout << "El valor a pagar es de: " << DSGS_vn << endl;
    return 0;
}