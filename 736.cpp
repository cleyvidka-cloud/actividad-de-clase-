#include <iostream>
#include <string>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string p1, p2, p3;
if (cin >> p1 >> p2 >> p3) {
if (p1 == "vertebrado") {
if (p2 == "ave") {
if (p3 == "carnivoro") cout << "aguila\n";
else if (p3 == "onivoro") cout << "paloma\n";
} 
else if (p2 == "mamifero") {
if (p3 == "onivoro") cout << "hombre\n";
else if (p3 == "herbivoro") cout << "vaca\n";
}
} 
else if (p1 == "invertebrado") {
if (p2 == "insecto") {
if (p3 == "hematofago") cout << "pulga\n";
else if (p3 == "herbivoro") cout << "oruga\n";
} 
else if (p2 == "anelido") {
if (p3 == "hematofago") cout << "sanguijuela\n";
else if (p3 == "onivoro") cout << "lombriz\n";
}
}
}
return 0;
}

