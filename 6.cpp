#include <iostream>

using namespace std;

int main()
{


            float importe, deduccion;

            cout << "Ingrese importe:";
            cin >> importe;

            if (importe>15000)
            {
       deduccion=importe*0.16;
    }
    else
    {
        deduccion=importe*0.1;
    }

    cout << "El importe neto es:" << importe-deduccion;


    return 0;
}
