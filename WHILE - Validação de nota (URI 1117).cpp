#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
   double n1;
   double n2;
   double media;
   cin >> n1;

   
   while (n1 < 0 || n1 > 10)
   {
       cout << "nota invalida" << endl;
       cin >> n1;
   }
   cin >> n2;
   while ( n2 < 0 || n2 > 10)
   {
       cout << "nota invalida" << endl;
       cin >> n2;
   }
   media = (n1 + n2) / 2;
   
   cout << "media = " << fixed << setprecision(2) << media << endl;
  
    return 0;
}