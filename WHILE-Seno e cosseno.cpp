#include <iostream>
#include <cmath>  // Para usar sin e cos
#include <iomanip> // Para controlar a precis�o da sa�da
using namespace std;

int main() {
    // Vari�veis de entrada
    double N1, N2;
    
    // L� os valores de N1 e N2
    cin >> N1 >> N2;

    // Define o incremento de 0.1 radianos
    double incremento = 0.1;

    // Vari�veis para controlar os intervalos de sa�da
    bool dentro_intervalo = false;
    double inicio_intervalo = 0.0;

    // Percorre o intervalo de N1 a N2 com incremento de 0.1 radianos
    double theta = N1;
    while (theta <= N2) {
        // Calcula sin(?) * cos(?)
        double resultado = sin(theta) * cos(theta);

        // Verifica se o resultado � positivo
        if (resultado > 0) {
            if (!dentro_intervalo) {
                // Se n�o estava em um intervalo positivo, inicia um
                inicio_intervalo = theta;
                dentro_intervalo = true;
            }
        } else {
            if (dentro_intervalo) {
                // Se estava em um intervalo positivo e encontrou um negativo, finaliza o intervalo
                cout << fixed << setprecision(1) << inicio_intervalo << " a " << theta - incremento << endl;
                dentro_intervalo = false;
            }
        }
        // Incrementa ?
        theta += incremento;
    }

    // Caso o intervalo termine em um ponto positivo
    if (dentro_intervalo) {
        cout << fixed << setprecision(1) << inicio_intervalo << " a " << theta - incremento << endl;
    }

    return 0;
}
