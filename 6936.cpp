#include <iostream>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, m, a;
if (cin >> n >> m >> a) {
if (n == m && m == a) {
cout << "ella te ama\n";
} 
else {
cout << "ella no te ama\n";
}
}
return 0;
}

