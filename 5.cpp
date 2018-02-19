#include <iostream>

using namespace std;

int main()
{
            int Num1,Num2,Num3;
    cout << "Ingrese numero 1: ";
    cin >> Num1;
    cout << "Ingrese numero 2: " ;
    cin >> Num2;
    cout << "Ingrese numero 3: " ;
    cin >> Num3;
    if (Num1*Num2==Num3)
    {
         cout << "El tercer numero es la multiplicacion de los dos primeros. ";
    }
    else
    {
         cout << "El tercer numero NO es la multiplicacion de los dos primeros. ";
    }
    return 0;
}
