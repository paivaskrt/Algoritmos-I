#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    string mensagemCifrada;

   
    cin >> N >> M;

    
    cin >> mensagemCifrada;

   
    char matriz[100][100]; 

  
    int index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] = mensagemCifrada[index++];
        }
    }

 
    string mensagemDecifrada = "";
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            mensagemDecifrada += matriz[i][j];
        }
    }

    
    cout << mensagemDecifrada << endl;

    return 0;
}

