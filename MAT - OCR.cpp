#include <iostream>
#include <string>
using namespace std;

// Novos padrões dos dígitos de 0 a 9
int digitos[10][5][3] = {
    {{0, 0, 0}, {0, 1, 0}, {0, 1, 0}, {0, 1, 0}, {0, 0, 0}}, // ZERO
    {{1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}}, // UM
    {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}, {0, 1, 1}, {0, 0, 0}}, // DOIS
    {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}, {1, 1, 0}, {0, 0, 0}}, // TRÊS
    {{0, 1, 0}, {0, 1, 0}, {0, 0, 0}, {1, 1, 0}, {1, 1, 0}}, // QUATRO
    {{0, 0, 0}, {0, 1, 1}, {0, 0, 0}, {1, 1, 0}, {0, 0, 0}}, // CINCO
    {{0, 0, 0}, {0, 1, 1}, {0, 0, 0}, {0, 1, 0}, {0, 0, 0}}, // SEIS
    {{0, 0, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}, {1, 1, 0}}, // SETE
    {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}, {0, 1, 0}, {0, 0, 0}}, // OITO
    {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}, {1, 1, 0}, {1, 1, 0}}  // NOVE
};

// Função para identificar o dígito
string identificarDigito(int matriz[5][3]) {
    for (int num = 0; num < 10; num++) {
        bool match = true;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] != digitos[num][i][j]) {
                    match = false;
                    break;
                }
            }
            if (!match) break;
        }
        if (match) {
            switch (num) {
                case 0: return "ZERO";
                case 1: return "UM";
                case 2: return "DOIS";
                case 3: return "TRES";
                case 4: return "QUATRO";
                case 5: return "CINCO";
                case 6: return "SEIS";
                case 7: return "SETE";
                case 8: return "OITO";
                case 9: return "NOVE";
            }
        }
    }
    return "DIGITO INVALIDO";
}

int main() {
    int matriz[5][3];
    int entrada[15];

    while (true) {
        // Leitura de uma linha de entrada
        for (int i = 0; i < 15; i++) {
            cin >> entrada[i];
        }

        // Condição de parada (linha com 15 zeros)
        bool isZero = true;
        for (int i = 0; i < 15; i++) {
            if (entrada[i] != 0) {
                isZero = false;
                break;
            }
        }
        if (isZero) break;

        // Preencher a matriz 5x3 com os valores lidos
        int idx = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                matriz[i][j] = entrada[idx++];
            }
        }

        // Identificar o dígito e imprimir o resultado
        cout << identificarDigito(matriz) << endl;
    }

    return 0;
}

