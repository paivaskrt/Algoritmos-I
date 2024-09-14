#include<iostream>  
using namespace std;  

// Função para gerar e exibir a sequência de Fibonacci até o n-ésimo termo
void fibonacci(int n) 
{
    int a = 0, b = 1, c;  // Inicializa os dois primeiros termos da sequência de Fibonacci e uma variável para o próximo termo

    // Imprime os primeiros dois termos da sequência
    cout << a << " "; 
    cout << b << " ";

    // Laço para calcular e imprimir os termos subsequentes da sequência de Fibonacci
    for (int i = 2; i < n; ++i) 
    {
        c = a + b;         // Calcula o próximo termo como a soma dos dois termos anteriores
        cout << c << " ";  // Imprime o próximo termo
        a = b;             // Atualiza a para o valor atual de b
        b = c;             // Atualiza b para o novo termo calculado
    }
}

int main() 
{
    int N;             // Variável para armazenar o número de termos da sequência a serem exibidos
    cin >> N;          // Lê o valor de N fornecido pelo usuário

    // Chama a função fibonacci para gerar e exibir a sequência de Fibonacci
    fibonacci(N);

    return 0;  // Indica que o programa terminou com sucesso
}
