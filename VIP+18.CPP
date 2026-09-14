#include <iostream>
using namespace std;
int main (){
int edad;
bool vip, ingrese;
cin >> edad >> vip;
ingrese = (edad >= 18) && vip;
cout << ingrese;
return 0 ;
}