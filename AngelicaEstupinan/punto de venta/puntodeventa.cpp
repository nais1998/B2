
#include <iostream>
using namespace std;
int main()
{
    float ADET_x, ADET_s = 0, ADET_vb, ADET_piva = 12, ADET_viva, ADET_pdesc = 10, ADET_vdesc, ADET_vn;
    int ADET_i = 0, ADET_l;
    cout << "Ingrese l: ";
    cin >> ADET_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> ADET_x;
        ADET_i = ADET_i + 1;
        ADET_s = ADET_s + ADET_x;
    } while (ADET_i < ADET_l);
    ADET_vb = ADET_s;
    ADET_viva = ADET_vb * ADET_piva / 100;
    ADET_vdesc = ADET_vb * ADET_pdesc / 100;
    ADET_vn = ADET_vb + ADET_viva - ADET_vdesc;
    cout << "El valor a pagar es de: " << ADET_vn << endl;
    return 0;
}