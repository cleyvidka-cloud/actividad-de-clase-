#include <iostream>

using namespace std;

int main() {
    // Optimización de entrada/salida para omegaUp
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    if (cin >> A >> B) {
        // Si las ganancias (A) superan las perdidas (B)
        if (A > B) {
            cout << "El negocio si va a jalar\n";
            cout << (A - B) << "\n"; // Diferencia a favor de las ganancias
        } 
        // Si las perdidas (B) son mas grandes que las ganancias (A)
        else {
            cout << "Dejalo ya esta muerto\n";
            cout << (B - A) << "\n"; // Diferencia a favor de las perdidas
        }
    }

    return 0;
}
