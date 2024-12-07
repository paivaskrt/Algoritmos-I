#include <iostream>
#include <cmath>    // Para sqrt e fabs
#include <iomanip>  // Para manipulação de casas decimais
using namespace std;

// Função para calcular o discriminante
float delta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

// Função para calcular as raízes
int calc_raizes(float a, float b, float c, float &x1, float &x2) {
    if (fabs(a) < 1e-6) { // Verifica se a = 0
        return 1; // Impossível calcular
    }

    float d = delta(a, b, c);

    if (d < 0) {
        return 1; // Não existem raízes reais
    } else if (fabs(d) < 1e-6) { // Considera d = 0 para evitar problemas de precisão
        x1 = -b / (2 * a);
        x2 = x1; // Ambas as raízes são iguais
    } else {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        if (x1 > x2) { // Garante que x1 seja a menor raiz
            swap(x1, x2);
        }
    }
    return 0; // Existem raízes reais
}

int main() {
    float a, b, c, x1, x2;

    // Entrada dos coeficientes
    cin >> a >> b >> c;

    // Cálculo das raízes
    if (calc_raizes(a, b, c, x1, x2) == 1) {
        cout << "Impossivel calcular" << endl;
    } else {
        if (fabs(x1 - x2) < 1e-6) { // Raízes iguais
            cout << fixed << setprecision(5) << "x = " << x1 << endl;
        } else { // Raízes distintas
            cout << fixed << setprecision(5) << "x1 = " << x1 << endl;
            cout << fixed << setprecision(5) << "x2 = " << x2 << endl;
        }
    }

    return 0;
}

