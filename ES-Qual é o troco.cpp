#include <iostream>   // Inclui a biblioteca para entrada e saída padrão
#include <iomanip>    // Inclui a biblioteca para manipulação da formatação de saída
#include <cmath>      // Inclui a biblioteca para funções matemáticas (neste caso, não é utilizada, mas é comum incluí-la para operações matemáticas)

using namespace std;  // Permite o uso de nomes como 'cin' e 'cout' sem precisar usar 'std::' antes

int main() {
    // Declaração das variáveis do tipo double para armazenar o valor do dinheiro, preço e troco
    double dinheiro;
    double preco;
    double troco;
    
    // Leitura do valor disponível de dinheiro (entrada do usuário)
    cin >> dinheiro;
    
    // Leitura do valor do preço do produto (entrada do usuário)
    cin >> preco;
    
    // Cálculo do troco, subtraindo o preço do valor disponível de dinheiro
    troco = dinheiro - preco;
    
    // Exibição do troco calculado, formatado com 2 casas decimais
    // 'fixed' força a exibição do número em ponto flutuante (decimal)
    // 'setprecision(2)' define que o número será exibido com 2 casas decimais
    cout << "TROCO = " << fixed << setprecision(2) << troco << endl;
    
    // Retorno 0 indica que o programa foi executado com sucesso
    return 0;
}