#include <iostream>
#include <iomanip>  
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
   
    
    for ( int i = 2; i <= N; i+=2)
    { 
        cout << i << "^2 = " << fixed << setprecision (0) << pow(i,2) << endl;
    }
    
    
    return 0;
}