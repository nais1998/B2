
#include <iostream>
using namespace std;
int main()
{
    float KYCA_x, KYCA_s = 0, KYCA_vb, KYCA_piva = 12, KYCA_viva, KYCA_pdesc = 10, KYCA_vdesc, KYCA_vn;
    int KYCA_i = 0, KYCA_l;
    cout << "Ingrese l: ";
    cin >> KYCA_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> KYCA_x;
        KYCA_i = KYCA_i + 1;
        KYCA_s = KYCA_s + KYCA_x;
    } while (KYCA_i < KYCA_l);
    KYCA_vb = KYCA_s;
    KYCA_viva = KYCA_vb * KYCA_piva / 100;
    KYCA_vdesc = KYCA_vb * KYCA_pdesc / 100;
    KYCA_vn = KYCA_vb + KYCA_viva - KYCA_vdesc;
    cout << "El valor a pagar es de: " << KYCA_vn << endl;
    return 0;
}