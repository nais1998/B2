
#include <iostream>
using namespace std;
int main()
{
    float ASNO_x, ASNO_s = 0, ASNO_vb, ASNO_piva = 12, ASNO_viva, ASNO_pdesc = 10, ASNO_vdesc, ASNO_vn;
    int ASNO_i = 0, ASNO_l;
    cout << "Ingrese l: ";
    cin >> ASNO_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> ASNO_x;
        ASNO_i = ASNO_i + 1;
        ASNO_s = ASNO_s + ASNO_x;
    } while (ASNO_i < ASNO_l);
    ASNO_vb = ASNO_s;
    ASNO_viva = ASNO_vb * ASNO_piva / 100;
    ASNO_vdesc = ASNO_vb * ASNO_pdesc / 100;
    ASNO_vn = ASNO_vb + ASNO_viva - ASNO_vdesc;
    cout << "El valor a pagar es de: " << ASNO_vn << endl;
    return 0;
}