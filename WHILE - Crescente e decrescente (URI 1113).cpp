#include <iostream>
using namespace std;

int main() {
    int x, y;

    // Leitura inicial dos valores de X e Y
    cin >> x >> y;

    // Loop at� que X e Y sejam iguais
    while (x != y) {
        if (x < y) {
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
        
        // Leitura dos pr�ximos valores
        cin >> x >> y;
    }

    return 0;
}
