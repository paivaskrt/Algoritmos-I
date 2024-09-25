#include <iostream>
using namespace std;

int main() {
    int N;
    
    // L� o n�mero inteiro
    cin >> N;

    // Verifica se N � menor ou igual a 1 (n�o � primo)
    if (N <= 1) {
        cout << "nao e primo" << endl;
        return 0;
    }

    // Inicia a vari�vel divisor e a flag primo
    int divisor = 2;
    bool primo = true;

    // Loop para verificar divisores de 2 at� N-1
    while (divisor * divisor <= N) {
        if (N % divisor == 0) {
            primo = false;
            break; // Se encontrar um divisor, N n�o � primo
        }
        divisor++;
    }

    // Exibe o resultado
    if (primo) {
        cout << "primo" << endl;
    } else {
        cout << "nao e primo" << endl;
    }

    return 0;
}
