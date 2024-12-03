#include <iostream>
using namespace std;

int main() {
    int N, M, pixelSize; // Dimensões da matriz e tamanho do pixel em mm
    cin >> N >> M >> pixelSize;

    // Alocação dinâmica da matriz NxM
    int** matriz = new int*[N]; // Aloca um vetor de ponteiros para N linhas
    for (int i = 0; i < N; ++i) {
        matriz[i] = new int[M]; // Para cada linha, aloca um vetor de M colunas
    }

    // Leitura da matriz
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Cálculo da área da ferida
    int area = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (matriz[i][j] == 1) {
                area++; // Conta os pixels da ferida
            }
        }
    }

    // Calculando a área total em mm²
    int areaTotal = area * pixelSize * pixelSize;
    cout << "AREA = " << areaTotal << " mm^2" << endl;

    // Liberar a memória alocada
    for (int i = 0; i < N; ++i) {
        delete[] matriz[i]; // Libera cada linha
    }
    delete[] matriz; // Libera o vetor de ponteiros

    return 0;
}

