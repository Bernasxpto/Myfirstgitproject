#include <iostream>
using namespace std;
 
int main() {
    float metros;
 
    // Solicitar a entrada do usuário
    cout << "Digite a medida em metros: ";
    cin >> metros;
 
    // Converter metros para milímetros e exibir o resultado
    cout << metros << " metros equivalem a " << metros * 1000 << " milímetros." << endl;
    return 0;
}