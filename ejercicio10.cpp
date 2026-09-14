#include <iostream>
using namespace std;

int main() {
    int A = 7;
    int B = 3;
    int C = ++A + B--;
    cout << A << ", " << B << ", " << C << endl;
    return 0;
}
