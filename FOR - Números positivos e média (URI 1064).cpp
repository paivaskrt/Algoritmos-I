#include <iostream>
#include <iomanip>  // para definir a precisão de saída
#include <cmath>

using namespace std;

int main() {
    int N = 0;       // Contador de valores positivos
    float numero;    // Para os números de entrada (podem ser float ou int)
    float soma = 0;  // Soma dos valores positivos
    float media = 0; // Média dos valores positivos

    // Leitura de 6 valores
    for (int i = 0; i < 6; i++) {
        cin >> numero;
        if (numero > 0) {
            soma += numero;  // Soma apenas valores positivos
            N++;             // Conta os positivos
        }
    }

    // Calcula a média dos positivos, se houver ao menos um positivo
    if (N > 0) {
        media = soma / N;
    }

    // Saída dos resultados
    cout << N << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}