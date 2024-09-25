#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;  
    int num;

    
    while (true) {
        cin >> num;
        if (num == 0) break;  // Se for zero, termina a entrada
        numeros.push_back(num);  // Adiciona o número ao vetor
    }

    
    int X;
    cin >> X;

    // Variável 
    bool encontrado = false;
    int posicao = -1;

    // Percorrer o vetor para procurar o número X
    for (int i = 0; i < numeros.size(); ++i) {
        if (numeros[i] == X) {
            encontrado = true;
            posicao = i;
            break;  
        }
    }

   
    if (encontrado) {
        cout << "Elemento " << X << " encontrado na posicao " << posicao << endl;
    } else {
        cout << "Elemento " << X << " nao foi encontrado" << endl;
    }

    return 0;
}
