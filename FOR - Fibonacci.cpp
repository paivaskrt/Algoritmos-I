#include<iostream>  
using namespace std;  

// Fun��o para gerar e exibir a sequ�ncia de Fibonacci at� o n-�simo termo
void fibonacci(int n) 
{
    int a = 0, b = 1, c;  // Inicializa os dois primeiros termos da sequ�ncia de Fibonacci e uma vari�vel para o pr�ximo termo

    // Imprime os primeiros dois termos da sequ�ncia
    cout << a << " "; 
    cout << b << " ";

    // La�o para calcular e imprimir os termos subsequentes da sequ�ncia de Fibonacci
    for (int i = 2; i < n; ++i) 
    {
        c = a + b;         // Calcula o pr�ximo termo como a soma dos dois termos anteriores
        cout << c << " ";  // Imprime o pr�ximo termo
        a = b;             // Atualiza a para o valor atual de b
        b = c;             // Atualiza b para o novo termo calculado
    }
}

int main() 
{
    int N;             // Vari�vel para armazenar o n�mero de termos da sequ�ncia a serem exibidos
    cin >> N;          // L� o valor de N fornecido pelo usu�rio

    // Chama a fun��o fibonacci para gerar e exibir a sequ�ncia de Fibonacci
    fibonacci(N);

    return 0;  // Indica que o programa terminou com sucesso
}
