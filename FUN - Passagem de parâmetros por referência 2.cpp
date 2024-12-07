#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void converte (float F, float &C, float &K)
{
    C = (5.0/9)*(F - 32);
    K = C + 273;
}

int main ()
{
    float temp;
    float C = 0;
    float K = 0;
    
    cin >> temp;
    
    converte(temp, C, K);
    
    cout << fixed << setprecision(2);
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;
    

	return 0;
}
