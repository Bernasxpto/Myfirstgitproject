#include <iostream>
using namespace std; 
const float PI = 3.1416;
float raio;
 
int main() {
cout << "Indique o valor do raio: ";
cin >> raio;
cout << "O perímetro da circunferência é: " << 2 * PI * raio << endl;
cout << "A área da circunferência é: " << PI * (raio * raio) << endl;
 
return 0; }