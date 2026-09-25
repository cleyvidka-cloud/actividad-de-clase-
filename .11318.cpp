#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a, b;
if (cin >> a >> b) {
if (a + b == 5) {
b = b + 3;
cout << (2 * a + b) << "\n";
} else {
a = a - 1;
if ((7 * a + b) % 2 == 0) {
cout << (a - b) << "\n";
} else {
cout << (a * b) << "\n";
}
}
}
return 0;
}

