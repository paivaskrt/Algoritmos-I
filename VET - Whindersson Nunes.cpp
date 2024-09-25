#include <iostream>
using namespace std;

int main() {
    int n;

    
    cin >> n;


    int views [1000];

        
    for(int i = 0; i < n; i++) {
        cin >> views [i];
        
    }

    
    int menor = 0;
    int maior = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(views [i] <= 10000000)
        {
            menor++;
        }
        else
        {
            maior++;
        }
    }

    
    cout << maior << " video(s) com mais de 10M views" << endl;
    cout << menor << " video(s) com menos de 10M views" << endl;

    return 0;
}
