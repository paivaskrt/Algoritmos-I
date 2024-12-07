#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;  // Número de casos de teste
    cin >> T;
    cin.ignore();  // Ignora o caractere de nova linha após a leitura de T

    for (int i = 0; i < T; i++) {
        string jogadorA, jogadorB;
        getline(cin, jogadorA);  // Lê a escolha do jogador A
        getline(cin, jogadorB);  // Lê a escolha do jogador B

        // Verifica se houve empate
        if (jogadorA == jogadorB) {
            cout << "Empate" << endl;
        } 
        // Verifica se o jogador A ganhou
        else if ((jogadorA == "pedra" && jogadorB == "tesoura") ||
                 (jogadorA == "tesoura" && jogadorB == "papel") ||
                 (jogadorA == "papel" && jogadorB == "pedra")) {
            cout << "Jogador A" << endl;
        } 
        // Caso contrário, o jogador B ganhou
        else {
            cout << "Jogador B" << endl;
        }
    }

    return 0;
}