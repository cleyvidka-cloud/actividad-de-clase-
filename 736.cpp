#include <iostream>
#include <string>

using namespace std;

int main() {
    // Optimización de entrada/salida para programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p1, p2, p3;
    
    // Leemos las tres palabras de la entrada
    if (cin >> p1 >> p2 >> p3) {
        
        if (p1 == "vertebrado") {
            if (p2 == "ave") {
                if (p3 == "carnivoro") cout << "aguia\n";
                else if (p3 == "onivoro") cout << "pomba\n";
            } 
            else if (p2 == "mamifero") {
                if (p3 == "onivoro") cout << "homem\n";
                else if (p3 == "herbivoro") cout << "vaca\n";
            }
        } 
        else if (p1 == "invertebrado") {
            if (p2 == "inseto") {
                if (p3 == "hematofago") cout << "pulga\n";
                else if (p3 == "herbivoro") cout << "lagarta\n";
            } 
            else if (p2 == "anelideo") {
                if (p3 == "hematofago") cout << "sanguessuga\n";
                else if (p3 == "onivoro") cout << "minhoca\n";
            }
        }
    }

    return 0;
}

