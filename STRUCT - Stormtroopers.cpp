#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct dados {
   int soldado;
   double IM; // qual malvado é unidade 
   double FA; // numero de inimigos abatidos
   double GA; // grau de aptidão
};

int main() {
    dados soldado[500];
    int i = 0;
    int aux;
    double maiorga = -1;
    int pos;
    
    
    cin >> aux;
    
    while (aux != 0) {
        soldado[i].soldado = aux;
        cin >> soldado[i].IM;
        cin >> soldado[i].FA; 
        
        soldado[i].GA = (soldado[i].IM + soldado[i].FA) / 2;
        i++;
        cin >> aux;
    }
    
    for (int j = 0; j < i; j++)
    {
        if (soldado[j].GA > maiorga)
        {
            maiorga = soldado[j].GA;
            pos = j;
        }
        
    }
    
    cout << fixed << setprecision(2);
    cout << "Stormtrooper escolhido: " << soldado[pos].soldado << endl;
    cout << "GA = " << maiorga << endl;
    

    return 0;
}
