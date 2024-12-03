#include <iostream>
using namespace std;

int main()
{
    int L, C;
    cin >> L >> C;


    int mat1[10][10], mat2[10][10], mat3[10][10];

  
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {                                 //     A 
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {                                 //     b
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {                                 //     c = a + b
           mat3[i][j] = mat1[i][j] + mat2[i][j];
           cout << mat3[i][j] << " ";
        }
        cout << endl;
        
    }
            
    
    return 0;
}