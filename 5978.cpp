#include <iostream>
#include <string>

using namespace std;

int main() {
    // Optimización de entrada y salida para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string nombre1, nombre2;
    long long puntos1, puntos2;

    // Lectura de los datos del primer programador y luego del segundo
    if (cin >> nombre1 >> puntos1 >> nombre2 >> puntos2) {
        
        // Comparamos los puntajes para determinar al mejor
        if (puntos1 > puntos2) {
            cout << nombre1 << "\n";
        } else {
            cout << nombre2 << "\n";
        }
    }

    return 0;
}
