#include <iostream>

using namespace std;


bool letrasusadas[26] = {false};

int main() {
    char letra;
    string frase;
    cout << "    " << "Bem-Vindo ao jogo da Forca sem Forca" << endl;
    cout << "Digite uma frase(Apenas em minúsculas):" <<endl;
    bool acerto = false;
    getline(cin, frase);

    while (!acerto) {
        acerto = true;
        for (char a : frase) {
            if (a == ' ' || letrasusadas[a]) {
                cout << a;
            } else {
                cout << "_";
                acerto = false;
            }
        }

        if (acerto) break;

        cout << endl << "Digite um palpite de letra que achas que tem na frase:" << endl;
        cin >> letra;
        letrasusadas[letra] = true;
      }
      cout << endl << "Parabéns! Acertaste a frase!"<<endl;
      return 0;
}