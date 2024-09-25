#include <iostream>
using namespace std;

int main() {
    int N, voto;
    int likes = 0, dislikes = 0;

    // Entrada do n�mero de votos
    cin >> N;

    // La�o para contabilizar os votos
    for (int i = 0; i < N; i++) {
        cin >> voto;
        if (voto == 1) {
            likes++;  // Contabiliza likes
        } else if (voto == -1) {
            dislikes++;  // Contabiliza dislikes
        }
    }

    // Sa�da do resultado com base na contagem de likes e dislikes
    if (likes > dislikes) {
        cout << "A maioria gostou" << endl;
    } else if (dislikes > likes) {
        cout << "A maioria nao gostou" << endl;
    } else {
        cout << "Deu empate" << endl;
    }

    return 0;
}
