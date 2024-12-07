#include <iostream>
#include <algorithm>  // Para a fun��o sort
#include <string>

using namespace std;

int main() {
    // Array para armazenar as tr�s palavras
    string palavras[3];

    // L� as tr�s palavras da entrada
    for (int i = 0; i < 3; i++) {
        cin >> palavras[i];
    }

    // Ordena as palavras em ordem alfab�tica
    sort(palavras, palavras + 3);

    // Mostra as palavras em uma �nica linha, separadas por um espa�o
    for (int i = 0; i < 3; i++) {
        cout << palavras[i];
        if (i < 2) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}