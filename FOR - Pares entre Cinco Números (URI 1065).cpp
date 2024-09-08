#include <iostream>
#include <iomanip>  
#include <cmath>

using namespace std;

int main() {
    int N = 0;       
    int numero;    



    for (int i = 0; i <5; i++)
{
        cin >> numero;
        if (numero % 2 == 0){
        	N++;
        }
}

    cout << N << " valores pares" << endl;


    return 0;
}