#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int L, C, R1, R2;
    cin >> L >> C >> R1 >> R2;
    
    if (min(L, C) < 2*max(R1, R2)) {
        cout << "N" << endl;
        return 0;
    }
    
    int dx = L - R1 - R2;
    int dy = C - R1 - R2;
    
    if (dx*dx + dy*dy >= (R1 + R2)*(R1 + R2)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}