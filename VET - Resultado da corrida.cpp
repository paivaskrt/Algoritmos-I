#include <iostream>
using namespace std;

int main() {
    double tempos[100];  
    int indices[100];    
    int N = 0;          
    double tempo;

   
    while (true) {
        cin >> tempo;
        if (tempo == -1) break;  
        tempos[N] = tempo;      
        indices[N] = N;          
        N++;
    }

   
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
               
                double tempTempo = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = tempTempo;

              
                int tempIndice = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = tempIndice;
            }
        }
    }

  
    cout << "Classificacao:" << endl;
    for (int i = 0; i < N; i++) {
        cout << indices[i] << endl;
    }

    return 0;
}
