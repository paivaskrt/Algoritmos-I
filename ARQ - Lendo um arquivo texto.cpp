#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main() {
    string nomeArquivo;
 
  
    getline(cin, nomeArquivo);
 
   
    ifstream arquivo(nomeArquivo);
 
   
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }
 
    
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
 
   
    arquivo.close();
 
    return 0;
}