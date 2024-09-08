#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int dia, mes, ano;
    cin >> dia >> mes >> ano;

  
    int g = (mes > 2) ? ano : ano - 1;

   
    int f = (mes > 2) ? mes + 1 : mes + 13;


    int n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;

   
    int delta;
    if (n < 36523) {
        delta = 2;
    } else if (n < 73048) {
        delta = 1;
    } else {
        delta = 0;
    }

  
    int ds = round(fmod(n / 7.0, 1) * 7) + delta + 1;

  
    ds = (ds > 7) ? ds - 7 : ds;

    
    switch (ds) {
        case 1:
            cout << "domingo" << endl;
            break;
        case 2:
            cout << "segunda-feira" << endl;
            break;
        case 3:
            cout << "terca-feira" << endl;
            break;
        case 4:
            cout << "quarta-feira" << endl;
            break;
        case 5:
            cout << "quinta-feira" << endl;
            break;
        case 6:
            cout << "sexta-feira" << endl;
            break;
        case 7:
            cout << "sabado" << endl;
            break;
    }

    return 0;
}
