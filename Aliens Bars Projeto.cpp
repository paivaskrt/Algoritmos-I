#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Item {
    string nome;
    double preco;
};

// Função para sortear 3 números
void sortearNumeros(int numeros[], int min, int max) 
{
    for (int i = 0; i < 3; i++)
    {
        numeros[i] = rand() % (max - min + 1) + min; // é usada para gerar um número aleatório dentro de um intervalo específico
    }
}

int main() {
    srand(time(0)); // usado para nunca repetir numeros

    // Categorias do menu alienígena
    Item bebidas[5] = {
        {"Suco de Cometa", 7.50},
        {"Nebulosa Espumante", 8.00},
        {"Energetico de Plutao", 9.25},
        {"Agua Lunar", 4.50},
        {"Galaxia Cremosa", 6.90}
    };

    Item comidas[5] = {
        {"Tentaculos Grelhados", 15.00},
        {"Hamburguer Cosmico", 17.50},
        {"Pizza de Marte", 20.00},
        {"Cachorro-Quente Espacial", 12.75},
        {"Taco de Saturno", 13.50}
    };

    Item entradas[5] = {
        {"Asteroides Fritos", 10.00},
        {"Aneis de Saturno Empanados", 9.50},
        {"Mini Meteoritos Assados", 8.75},
        {"Petiscos do Vacuo", 6.90},
        {"Estrelas Cadentes Crocantes", 7.80}
    };

    Item sobremesas[5] = {
        {"Sorvete Intergalactico", 8.90},
        {"Bolo de Buraco Negro", 12.50},
        {"Cometa Gelado", 9.80},
        {"Doces de Andromeda", 5.50},
        {"Pudim de Gravidade Zero", 6.75}
    };

    Item comanda[50];
    int quantidadeItens = 0;
    double total = 0.0;
    int escolhaCategoria = -1;
    int escolhaItem = -1;

    // Variáveis do Jogo do Bicho
    int numeros_premiados[3];
    double total_pagar = 0.0;
    double total_receber = 0.0;
    const int max_tentativas = 3;

    cout << "Bem-vindo ao Aliens Bar's!" << endl;

    while (escolhaCategoria != 0) {
        // Exibir categorias do menu
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Bebidas" << endl;
        cout << "2. Comidas" << endl;
        cout << "3. Entradas" << endl;
        cout << "4. Sobremesas" << endl;
        cout << "5. Jogo do Bicho" << endl;
        cout << "0. Finalizar pedido" << endl;
        cout << "==========================" << endl;

        cout << "Escolha uma categoria: ";
        cin >> escolhaCategoria;

        if (escolhaCategoria >= 1 && escolhaCategoria <= 4) {
            Item* categoriaSelecionada;
            int tamanhoCategoria = 5;

            if (escolhaCategoria == 1) categoriaSelecionada = bebidas;
            else if (escolhaCategoria == 2) categoriaSelecionada = comidas;
            else if (escolhaCategoria == 3) categoriaSelecionada = entradas;
            else if (escolhaCategoria == 4) categoriaSelecionada = sobremesas;

            // Exibir itens da categoria escolhida
            cout << "\n========== ITENS ==========" << endl;
            for (int i = 0; i < tamanhoCategoria; i++) {
                cout << i + 1 << ". " << categoriaSelecionada[i].nome << " - $" << fixed << setprecision(2) << categoriaSelecionada[i].preco << endl;
            }
            cout << "0. Voltar ao menu principal" << endl;
            cout << "===========================" << endl;

            cout << "Escolha um item: ";
            cin >> escolhaItem;

            if (escolhaItem >= 1 && escolhaItem <= tamanhoCategoria) {
                if (quantidadeItens < 50) {
                    comanda[quantidadeItens] = categoriaSelecionada[escolhaItem - 1];
                    total += categoriaSelecionada[escolhaItem - 1].preco;
                    quantidadeItens++;
                    cout << categoriaSelecionada[escolhaItem - 1].nome << " adicionado a comanda!" << endl;
                } else {
                    cout << "Comanda cheia! Nao e possivel adicionar mais itens." << endl;
                }
            } else if (escolhaItem != 0) {
                cout << "Opcao invalida. Voltando ao menu principal." << endl;
            }
        } else if (escolhaCategoria == 5) {
            // Jogo do Bicho
            for (int tentativa = 1; tentativa <= max_tentativas; tentativa++) {
                bool acertou = false;
                sortearNumeros(numeros_premiados, 1, 99); // Sorteia os números

                cout << "\nTentativa " << tentativa << " de " << max_tentativas << endl;
                int aposta;
                cout << "Escolha um numero de 1 a 99 (custo: R$1.00): ";
                cin >> aposta;

                if (aposta < 1 || aposta > 99) {
                    cout << "Numero invalido. Escolha um numero entre 1 e 99." << endl;
                    tentativa--; // Não conta como tentativa válida
                    continue;
                }

                total_pagar += 1.0;

                for (int i = 0; i < 3; i++) {
                    if (aposta == numeros_premiados[i]) {
                        acertou = true;
                        break;
                    }
                }

                if (acertou) {
                    cout << "Parabens! Voce acertou um dos numeros premiados!" << endl;
                    double premio = 10.0;
                    total_receber += premio;
                    cout << "Voce ganhou R$" << premio << "!" << endl;
                } else {
                    cout << "Que pena! Voce nao acertou nenhum numero premiado." << endl;
                }

                cout << "Numeros sorteados foram: ";
                for (int i = 0; i < 3; i++) {
                    cout << numeros_premiados[i] << " ";
                }
                cout << endl;
            }
        } else if (escolhaCategoria == 0) {
            // Finaliza o pedido
            break;
        } else {
            cout << "Categoria invalida. Tente novamente." << endl;
        }
    }

    // Exibir a comanda final
    cout << "\n========== COMANDA ==========" << endl;
    for (int i = 0; i < quantidadeItens; i++) {
        cout << comanda[i].nome << " - $" << fixed << setprecision(2) << comanda[i].preco << endl;
    }
    cout << "=============================" << endl;
    cout << "Total comanda: $" << fixed << setprecision(2) << total << endl<<endl;
    
    cout << "Total a pagar no Jogo do Bicho: R$" << total_pagar << endl<<endl<<endl;
   
    cout << "Total a pagar: R$" << total_pagar+total << endl<<endl<<endl<<endl;
    
    cout << "Total a receber no Jogo do Bicho: R$" << total_receber << endl<<endl;
    
    cout << "Obrigado por visitar o Aliens Bar's! Volte sempre!" << endl<<endl<<endl;

    return 0;
}
