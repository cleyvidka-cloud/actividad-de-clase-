#include <iostream>

using namespace std;

int main() {
    // Optimización de entrada/salida para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    if (cin >> A >> B) {
        // Primera condición: ¿A + B es igual a 5?
        if (A + B == 5) {
            B = B + 3; // Súmale 3 a B
            cout << (2 * A + B) << "\n"; // Imprime 2A + B
        } else {
            A = A - 1; // Réstale 1 a A
            
            // Segunda condición: ¿7A + B es par?
            if ((7 * A + B) % 2 == 0) {
                cout << (A - B) << "\n"; // Imprime A - B
            } else {
                cout << (A * B) << "\n"; // Imprime A x B
            }
        }
    }

    return 0;
}
