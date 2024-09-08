#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double A;
    double B;
    double C;
    double D;
    double Z;
    double X;
    double Y;


    cin >> A >> B >> C;


    D = pow(B,2) - (4*(A)*(C));
    Z = 2 * (A);
    X = (-(B) + sqrt(D)) / Z;
    Y = (-(B) - sqrt(D)) / Z;

    if (D >= 0 && Z != 0)
    {
        
     cout << fixed << setprecision(5);
     cout << "R1 = " << X << endl;
     cout << "R2 = " << Y << endl;
    
    }
     else  
    {
     cout << "Impossivel calcular" << endl;
    }
       





    return 0;
}