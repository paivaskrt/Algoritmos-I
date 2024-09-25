#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int N;
    

    cin >> N;

    int X[100], Y[100];  
    char Op[100];        

    
    for (int i = 0; i < N; ++i) cin >> X[i];
    for (int i = 0; i < N; ++i) cin >> Y[i];
    for (int i = 0; i < N; ++i) cin >> Op[i];

    
    for (int i = 0; i < N; ++i) {
        if (Op[i] == '+') {
            cout << X[i] << " + " << Y[i] << " = " << X[i] + Y[i] << endl;
        } else if (Op[i] == '-') {
            cout << X[i] << " - " << Y[i] << " = " << X[i] - Y[i] << endl;
        } else if (Op[i] == '*') {
            cout << X[i] << " * " << Y[i] << " = " << X[i] * Y[i] << endl;
        } else if (Op[i] == '/') {
            cout << X[i] << " / " << Y[i] << " = " << fixed << setprecision(2) << (double)X[i] / Y[i] << endl;
        }
    }

    return 0;
}
