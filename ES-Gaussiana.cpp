#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    double x;
    double m;
    double s;
    double p;
    
    p = 3.14159;
    
    cin>> x >> m >> s;
    
    double exponent = -pow(x - m, 2) / (2 * pow(s , 2));
    double fx = (1 / ( s * sqrt ( 2 * p ))) * exp (exponent);
    
    cout << fixed << setprecision (4) << fx << endl;
    
    return 0;
}

