#include <iostream>



using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Vari�veis tempor�rias para ordena��o
    int menor, meio, maior;

    // Encontrar o menor valor
    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }

    // Encontrar o maior valor
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    // O valor do meio ser� aquele que n�o � nem o menor, nem o maior
    if ((a != menor && a != maior)) {
        meio = a;
    } else if ((b != menor && b != maior)) {
        meio = b;
    } else {
        meio = c;
    }

    // Exibe os valores em ordem crescente
    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl;

    // Linha em branco
    cout << endl;

    // Exibe os valores na ordem original
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}