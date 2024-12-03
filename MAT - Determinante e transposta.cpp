#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double M[2][2];  // Matriz 2x2
    double determinante;

    // Leitura dos 4 números reais e armazenando na matriz M
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> M[i][j];
        }
    }

    // Calculando o determinante de M (det(M) = M[0][0] * M[1][1] - M[0][1] * M[1][0])
    determinante = M[0][0] * M[1][1] - M[0][1] * M[1][0];

    // Exibindo a matriz original
    cout << fixed << setprecision(4);
    cout << "M = [" << M[0][0] << " " << M[0][1] << " ; " 
         << M[1][0] << " " << M[1][1] << "]" << endl;

    // Exibindo o determinante de M
    cout << "Determinante de M = " << determinante << endl;

    // Exibindo a matriz transposta de M
    cout << "Transposta de M = [" << M[0][0] << " " << M[1][0] << " ; " 
         << M[0][1] << " " << M[1][1] << "]" << endl;

    return 0;
}
