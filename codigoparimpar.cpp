#include <iostream>

using namespace std;


int main(){
    
     int numero; 

     cout << "Digite um número: ";
     cin >> numero;

     if (numero % 2 == 0) {
        cout << " é par." << endl;
    } else {
        cout << " é ímpar." << endl;
    }

    return 0;
}

