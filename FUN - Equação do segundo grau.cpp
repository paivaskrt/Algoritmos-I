#include <iostream>
#include <cmath>    // Para sqrt e fabs
#include <iomanip>  // Para manipula��o de casas decimais
using namespace std;

// Fun��o para calcular o discriminante
float delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

// Fun��o para calcular as ra�zes
int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    if (fabs(a) < 1e-6) { // Verifica se a = 0
        return 1; // Imposs�vel calcular
    }

    float d = delta(a, b, c);

    if (d < 0) {
        return 1; // N�o existem ra�zes reais
    } else if (fabs(d) < 1e-6) { // Considera d = 0 para evitar problemas de precis�o
        x1 = -b / (2 * a);
        x2 = x1; // Ambas as ra�zes s�o iguais
    } else {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        if (x1 > x2) { // Garante que x1 seja a menor raiz
            swap(x1, x2);
        }
    }
    return 0; // Existem ra�zes reais
}

int main() {
    float a, b, c, x1, x2;

    // Entrada dos coeficientes
    cin >> a >> b >> c;

    // C�lculo das ra�zes
    if (calc_raizes(a, b, c, x1, x2) == 1) {
        cout << "Impossivel calcular" << endl;
    } else {
        if (fabs(x1 - x2) < 1e-6) { // Ra�zes iguais
            cout << fixed << setprecision(5) << "x = " << x1 << endl;
        } else { // Ra�zes distintas
            cout << fixed << setprecision(5) << "x1 = " << x1 << endl;
            cout << fixed << setprecision(5) << "x2 = " << x2 << endl;
        }
    }

    return 0;
}

