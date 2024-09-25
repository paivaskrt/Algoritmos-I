#include <iostream>
using namespace std;

int main() {
    int n;

    
    cin >> n;

    // Declaração de um array estático para armazenar os contatos (tamanho máximo 1000 conforme restrição)
    int contatos[1000];

    // Leitura dos contatos
    for(int i = 0; i < n; i++) {
        cin >> contatos[i];
    }

    // Inicializando menor e maior com o primeiro elemento do array
    int menor = contatos[0];
    int maior = contatos[0];

    // Laço para encontrar o menor e maior número de contatos
    for(int i = 1; i < n; i++)
    {
        if(contatos[i] < menor) 
        {
            menor = contatos[i];
        }
        if(contatos[i] > maior) 
        {
            maior = contatos[i];
        }
    }

    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;
}
