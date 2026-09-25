#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int A, B;
if (cin >> A >> B) {
if (A > B) {
cout << "el negocio si va a jalar\n";
cout << (A - B) << "\n"; 
} 
else {
cout << "dejalo ya esta muerto\n";
cout << (B - A) << "\n";
}
}
return 0;
}

