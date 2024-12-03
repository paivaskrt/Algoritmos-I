#include <iostream>
using namespace std;

int main() {
   
    int qrCode[3][3];

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> qrCode[i][j];
        }
    }

   
    int masculino[3][3] = {
        {1, 1, 1},
        {0, 1, 0},
        {0, 0, 1}
    };

    int feminino[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 0, 0}
    };

   
    bool ehMasculino = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (qrCode[i][j] != masculino[i][j]) {
                ehMasculino = false;
                break;
            }
        }
        if (!ehMasculino) break;
    }

   
    bool ehFeminino = true;
    if (!ehMasculino) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (qrCode[i][j] != feminino[i][j]) {
                    ehFeminino = false;
                    break;
                }
            }
            if (!ehFeminino) break;
        }
    }

  
    if (ehMasculino) {
        cout << "MASCULINO" << endl;
    } else if (ehFeminino) {
        cout << "FEMININO" << endl;
    } else {
        cout << "QR CODE INVALIDO" << endl;
    }

    return 0;
}
