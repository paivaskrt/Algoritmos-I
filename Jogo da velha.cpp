#include <iostream>

using namespace std;

struct Jogador
{
    string nome;
    int vitorias;
    int derrotas;
    int empates;
};

void imprimirTabuleiro(char tabuleiro[3][3])
{
    cout << " " << tabuleiro[0][0] << " | " << tabuleiro[0][1] << " | " << tabuleiro[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << tabuleiro[1][0] << " | " << tabuleiro[1][1] << " | " << tabuleiro[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << tabuleiro[2][0] << " | " << tabuleiro[2][1] << " | " << tabuleiro[2][2] << endl;
}

bool verificarVitoria(char tabuleiro[3][3], char jogador)
{
 
    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
        {
            return true;
        }
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)
        {
            return true;
        }
    }
  
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador))
    {
        return true;
    }
    return false;
}


void jogar(Jogador &jogador1, Jogador &jogador2)
{
    char tabuleiro[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char jogadorAtual = 'X';
    int jogadas = 0;

    while (jogadas < 9)
    {
        imprimirTabuleiro(tabuleiro);
        cout << "Jogador " << jogadorAtual << ", escolha uma posicao (1-9): ";
        int posicao;
        cin >> posicao;

      
        if (posicao < 1 || posicao > 9)
        {
            cout << "Posicao inválida, tente novamente." << endl;
            continue;
        }

      
        int linha = (posicao - 1) / 3;
        int coluna = (posicao - 1) % 3;
        if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O')
        {
            tabuleiro[linha][coluna] = jogadorAtual;
            jogadas++;
        }
        else
        {
            cout << "Posicao ocupada, tente novamente." << endl;
            continue;
        }

    
        if (verificarVitoria(tabuleiro, jogadorAtual))
        {
            imprimirTabuleiro(tabuleiro);
            if (jogadorAtual == 'X')
            {
                jogador1.vitorias++;
                jogador2.derrotas++;
                cout << jogador1.nome << " venceu!" << endl;
            }
            else
            {
                jogador2.vitorias++;
                jogador1.derrotas++;
                cout << jogador2.nome << " venceu!" << endl;
            }
            return;
        }

       
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

   
    imprimirTabuleiro(tabuleiro);
    jogador1.empates++;
    jogador2.empates++;
    cout << "Empate!" << endl;
}

int main()
{
    Jogador jogador1, jogador2;

    cout << "Digite o nome do jogador 1: ";
    cin >> jogador1.nome;
    jogador1.vitorias = 0;
    jogador1.derrotas = 0;
    jogador1.empates = 0;

    cout << "Digite o nome do jogador 2: ";
    cin >> jogador2.nome;
    jogador2.vitorias = 0;
    jogador2.derrotas = 0;
    jogador2.empates = 0;

    char jogarNovamente;
    do
    {
        jogar(jogador1, jogador2);

        cout << "Deseja jogar novamente? (s/n): ";
        cin >> jogarNovamente;
    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    cout << "\nResultados finais:\n";
    cout << jogador1.nome << " - Vitórias: " << jogador1.vitorias << ", Derrotas: " << jogador1.derrotas << ", Empates: " << jogador1.empates << endl;
    cout << jogador2.nome << " - Vitórias: " << jogador2.vitorias << ", Derrotas: " << jogador2.derrotas << ", Empates: " << jogador2.empates << endl;

    return 0;
}
