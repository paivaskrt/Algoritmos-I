#include <iostream>
#include <algorithm>  // Para a função sort
#include <string>

using namespace std;

int main() {
    // Array para armazenar as três palavras
    string palavras[3];

    // Lê as três palavras da entrada
    for (int i = 0; i < 3; i++) {
        cin >> palavras[i];
    }

    // Ordena as palavras em ordem alfabética
    sort(palavras, palavras + 3);

    // Mostra as palavras em uma única linha, separadas por um espaço
    for (int i = 0; i < 3; i++) {
        cout << palavras[i];
        if (i < 2) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}