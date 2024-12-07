#include <iostream>
#include <string>
using namespace std;

struct Cavaleiro {
    string nome;
    int base;
};

int main() {
    int n;
    cin >> n; // N�mero de cavaleiros
    cin.ignore(); // Ignorar o '\n' ap�s o n�mero

    // Aloca��o din�mica de mem�ria para o array de cavaleiros
    Cavaleiro* cavaleiros = new Cavaleiro[n];

    for (int i = 0; i < n; ++i) {
        getline(cin, cavaleiros[i].nome); // Nome do cavaleiro
        cin >> cavaleiros[i].base;       // N�mero da base
        cin.ignore();                    // Ignorar o '\n' ap�s o n�mero
    }

    string busca;
    getline(cin, busca); // Nome do cavaleiro a ser buscado

    // Busca pelo cavaleiro no array
    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (cavaleiros[i].nome == busca) {
            cout << "Este cavaleiro esta na base " << cavaleiros[i].base << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    // Libera��o da mem�ria alocada
    delete[] cavaleiros;

    return 0;
}

