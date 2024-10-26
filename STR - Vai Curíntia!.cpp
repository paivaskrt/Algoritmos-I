#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;  // N�mero de atletas
    bool algumMaior = false;  // Para verificar se h� algum jogador maior de idade

    // Leitura da quantidade de jogadores
    cin >> N;
    cin.ignore();  // Ignorar o caractere de nova linha ap�s o n�mero

    // Loop para leitura dos dados de cada jogador
    for (int i = 0; i < N; i++) {
        string nome;
        int idade;

        getline(cin, nome);  // Leitura do nome completo do jogador
        cin >> idade;        // Leitura da idade
        cin.ignore();  // Ignorar o caractere de nova linha ap�s a idade

        // Verifica se o jogador tem 18 anos ou mais
        if (idade >= 18) {
            cout << nome << " " << idade << endl;  // Exibe o nome e idade
            algumMaior = true;
        }
    }

    // Se n�o houver nenhum jogador maior de idade
    if (!algumMaior) {
        cout << "Nenhum jogador com 18 anos ou mais" << endl;
    }

    return 0;
}
