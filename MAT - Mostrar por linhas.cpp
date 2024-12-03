#include <iostream>

using namespace std;

int main (){
  int L, C;
    cin >> L >> C;
    
    int matriz [10][10];
    
    for(int i = 0; i < L; i++){
        
        for (int j = 0; j < C; j++)
        cin >> matriz [i][j];
    }
        for(int i = 0; i < L; i++){
            
        for (int j = 0; j < C; j++){
           cout << matriz [i][j] << " ";
        }
         cout << endl;
        }
       
    
    return 0;
}
