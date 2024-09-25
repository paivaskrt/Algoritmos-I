#include <iostream>
#include <algorithm> // Para a função std::max
using namespace std;

// Função que calcula o comprimento de ciclo de um número n
int ciclo(int n) {
    int comprimento = 1;
    while (n != 1) {
        while (n % 2 == 0) { // Enquanto n for par
            n /= 2;
            comprimento++;
        }
        if (n != 1) { // Caso ainda não tenha atingido 1
            n = 3 * n + 1;
            comprimento++;
        }
    }
    return comprimento;
}


void max_ciclo(int i, int j) {
    int inicio = min(i, j);
    int fim = max(i, j);
    int max_comprimento = 0;

    // Para cada número no intervalo [inicio, fim]
    for (int n = inicio; n <= fim; ++n) {
        int comprimento = ciclo(n);
        max_comprimento = max(max_comprimento, comprimento);
    }

    // Imprime o resultado no formato: i j max_comprimento
    cout << i << " " << j << " " << max_comprimento << endl;
}

int main() {
    int i, j;

    // Lê os valores de entrada
    while (cin >> i >> j) {
        max_ciclo(i, j);
    }

    return 0;
}

