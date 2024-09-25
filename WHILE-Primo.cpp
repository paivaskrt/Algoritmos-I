#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Lê o número inteiro
    cin >> N;

    // Verifica se N é menor ou igual a 1 (não é primo)
    if (N <= 1) {
        cout << "nao e primo" << endl;
        return 0;
    }

    // Inicia a variável divisor e a flag primo
    int divisor = 2;
    bool primo = true;

    // Loop para verificar divisores de 2 até N-1
    while (divisor * divisor <= N) {
        if (N % divisor == 0) {
            primo = false;
            break; // Se encontrar um divisor, N não é primo
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
