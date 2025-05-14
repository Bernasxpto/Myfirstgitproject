#include <iostream>

using namespace std;

    //  int main(){
    //       float nota1, nota2, nota3, media;
        
    //     cout << "Introduza a primeira nota: ";
    //     cin >> nota1;
    //
    //       cout << "Introduza a segunda nota: ";
    //     cin >> nota2;
    //
    //
    //      media = (nota1 + nota2 + nota3) / 3;
    //
    //    cout << "A média das notas é: " << media << endl;
    //
    //      return 0;
    //  }




int main() {
    float notas[10] = {10.5, 15.2, 18.3, 14.7, 12.1, 9.6, 20.0, 11.8, 16.4, 13.9};
    float soma = 0.0;
    float media;

    for (int i = 0; i < 10; i++) {
        soma += notas[i];
    }

    media = soma / 10;

    cout << "A média dos valores é: " << media << endl;

    return 0;
}
