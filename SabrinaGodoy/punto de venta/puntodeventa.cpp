
#include <iostream>
using namespace std;
int main()
{
    float SGC_x, SGC_s = 0, SGC_vb, SGC_piva = 12, SGC_viva, SGC_pdesc = 10, SGC_vdesc, SGC_vn;
    int SGC_i = 0, SGC_l;
    cout << "Ingrese l: ";
    cin >> SGC_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> SGC_x;
        SGC_i = SGC_i + 1;
        SGC_s = SGC_s + SGC_x;
    } while (SGC_i < SGC_l);
    SGC_vb = SGC_s;
    SGC_viva = SGC_vb * SGC_piva / 100;
    SGC_vdesc = SGC_vb * SGC_pdesc / 100;
    SGC_vn = SGC_vb + SGC_viva - SGC_vdesc;
    cout << "El valor a pagar es de: " << SGC_vn << endl;
    return 0;
}