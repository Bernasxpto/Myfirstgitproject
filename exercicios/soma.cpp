#include <iostream>

using namespace std;

int numero;
int numero2;
int resultadosoma;


int main(){
    cout << "Introduza o primero numero";
    cin >> numero;
    cout << "introduza o segundo numero";
    cin >> numero2;

    resultadosoma = numero + numero2;

    cout << "A soma dos dois numeros é: " << resultadosoma << endl;

    return 0;

}