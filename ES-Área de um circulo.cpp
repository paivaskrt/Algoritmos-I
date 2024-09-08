 #include <iostream>
 #include <iomanip> 
 #include <cmath> 
 using namespace std;
 
  int main ()
{
  float raio; 
  float area;
  
  cin >> raio;
  area = 3.14159 * pow (raio, 2);
  
    
   cout << fixed << setprecision(3);

     cout << "AREA = " << area << endl;
    	return 0;
}