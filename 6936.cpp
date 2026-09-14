#include <iostream>

using namespace std;

int main() {
    // Optimización para lectura rápida de datos
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, A;
    if (cin >> N >> M >> A) {
        // Si los tres números son idénticos
        if (N == M && M == A) {
            cout << "ELLA TE AMA\n";
        } 
        // Si hay alguna diferencia entre ellos
        else {
            cout << "ELLA NO TE AMA\n";
        }
    }

    return 0;
}
