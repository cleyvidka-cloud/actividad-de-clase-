#include <iostream>
#include <string>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string nombre1, nombre2;
long long puntos1, puntos2;
if (cin >> nombre1 >> puntos1 >> nombre2 >> puntos2) {
if (puntos1 > puntos2) {
cout << nombre1 << "\n";
} else {
cout << nombre2 << "\n";
}
}
return 0;
}

