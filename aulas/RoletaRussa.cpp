#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int posicaoBala;

    int tambor[6] = {0, 0, 0, 0, 0, 0};

    srand(time(0));
    posicaoBala = rand() % 6;
    tambor[posicaoBala] = 1;

    cout << "Bem-vindos ao jogo de Roleta Russa! Temos 2 jogadores." << endl;
    cout << "O tambor foi carregado e girado. Boa sorte!" << endl;

    int jogadorAtual = 1; 

    for (int i = 0; i < 6; i++) {
        cout << "Jogador " << jogadorAtual << ", pressiona Enter para puxar o gatilho...";
        cin.ignore();

        if (tambor[i] == 1) {
            cout << "Bang! Jogador " << jogadorAtual << " foi eliminado!" << endl;
            cout << "Jogador " << (jogadorAtual == 1 ? 2 : 1) << " é o vencedor!" << endl;
            break;
        } else {
            cout << "Clic! A câmara " << i + 1 << " estava vazia. Jogador " 
                 << jogadorAtual << " sobreviveu!" << endl;
        }

        jogadorAtual = (jogadorAtual == 1) ? 2 : 1;

        if (i == 5) {
            cout << "Incrível! Ambos os jogadores sobreviveram à roleta russa!" << endl;
        }
    }

    return 0;
}
