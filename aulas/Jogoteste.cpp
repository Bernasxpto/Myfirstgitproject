#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Insira um numero para iniciar a contagem regressiva: ";
    cin >> numero;

    if(numero <= 0){
        cout << "Por favor insira um numero maior que 0!!!" << endl;
        return 1;
    }

    int contagem[numero];

    for(int i = 0; i < numero; i++){
        contagem[i] = numero - i;
    }

    cout << "Contagem regressiva: ";
    for(int i = 0; i < numero; i++){
        cout << contagem[i] << " ";
    }

    cout << endl;
    return 0;


}