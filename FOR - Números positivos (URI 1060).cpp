#include <iostream>

using namespace std;

int main() {
    int valores[6]; // Array para armazenar os 6 valores
    int positivos = 0; // Contador de valores positivos



    // Leitura dos valores
    for (int i = 0; i < 6; i++)
    {
        cin >> valores[i];
        if (valores[i] > 0)
            positivos++;
        
    }

    // Exibe a quantidade de valores positivos
    cout << positivos << " valores positivos" << endl;

    return 0;
}