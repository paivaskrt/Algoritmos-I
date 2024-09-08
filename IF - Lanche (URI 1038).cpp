#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    float precos[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50}; 

    
    int codigo, quantidade;

  
    cin >> codigo >> quantidade;


    float total = precos[codigo] * quantidade;

   
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

    return 0;
}