#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int alunos;
    int soma_acima = 0;
    int soma_abaixo = 0;
    double soma_total = 0;
    double media;
    int i;
    
    cin >> alunos;
    
    double notas[20];
    
    for (i = 0; i < alunos; i++){
        cin >> notas[i];
        soma_total = soma_total + notas[i];
        
    }
    
    media = soma_total / alunos;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << endl;
    
    for (i = 0; i < alunos; i++){
        if (notas[i] < media)
            soma_abaixo ++;
        else
            soma_acima ++;
    }
    
    cout << "Alunos com nota acima da media: " << soma_acima << endl;
    cout << "Alunos com nota abaixo da media: " << soma_abaixo << endl;
    
    return 0;
}
