//Feito por Bernardo Teves
// 09/11/2025 - 23:59
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h> // usleep() usado para criar pequenos atrasos na animação
using namespace std;

// Constantes do tabuleiro
const int LINHAS = 3;
const int COLUNAS = 10;
const int NUM_CASAS = LINHAS * COLUNAS;

// Casas especiais com efeitos
const int CASA_PERDE_VEZ = 5;
const int CASA_VOLTA_3 = 10;
const int CASA_AVANCA_3 = 15;
const int CASA_JOGA_NOVAMENTE = 20;
const int CASA_ESPERA = 25;

int tabuleiro[LINHAS][COLUNAS]; // Matriz que representa o tabuleiro

// Função para limpar o ecrã 
void clear() {
#ifdef WIN32
    system("CLS");
#else
    system("clear");
#endif
}

// Desenha o dado com o número correspondente
void desenharDado(int n) {
    cout << "\n";
    cout << "╔═══════╗\n";

    switch(n) {
        case 1:
            cout << "║       ║\n";
            cout << "║   ●   ║\n";
            cout << "║       ║\n";
            break;

        case 2:
            cout << "║ ●     ║\n";
            cout << "║       ║\n";
            cout << "║     ● ║\n";
            break;

        case 3:
            cout << "║ ●     ║\n";
            cout << "║   ●   ║\n";
            cout << "║     ● ║\n";
            break;

        case 4:
            cout << "║ ●   ● ║\n";
            cout << "║       ║\n";
            cout << "║ ●   ● ║\n";
            break;

        case 5:
            cout << "║ ●   ● ║\n";
            cout << "║   ●   ║\n";
            cout << "║ ●   ● ║\n";
            break;

        case 6:
            cout << "║ ●   ● ║\n";
            cout << "║ ●   ● ║\n";
            cout << "║ ●   ● ║\n";
            break;
    }

    cout << "╚═══════╝\n\n";
}

// Função que anima o dado 
int animarDado() {
    int numero = 1;

    for (int i = 0; i < 10; i++) {
        numero = rand() % 6 + 1; // Número aleatório entre 1 e 6
        cout << "🎲 A rodar o dado...\n";
        clear();
        desenharDado(numero);
        usleep(80000); // Pequena pausa para dar efeito de rotação
    }

    return numero; // Retorna o valor final do dado
}

// Inicializa o tabuleiro com números sequenciais
void iniciartabuleiro() {
    int n = 1;

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = n++;
        }
    }
}

// Mostra o estado atual do tabuleiro
void mostrartabuleiro(int pos1, int pos2) {
    cout << "\n===================== TABULEIRO ======================\n";

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            int casa = tabuleiro[i][j];
            cout << "[";

            // Se os dois jogadores estão na mesma casa
            if (casa == pos1 && casa == pos2) {
                cout << "J1&J2";
            }
            // Jogador 1
            else if (casa == pos1) {
                cout << "J1 ";
            }
            // Jogador 2
            else if (casa == pos2) {
                cout << "J2 ";
            }
            // Casas normais e especiais
            else {
                switch(casa) {
                    case CASA_PERDE_VEZ:      cout << "PV "; break;
                    case CASA_VOLTA_3:        cout << "V3 "; break;
                    case CASA_AVANCA_3:       cout << "A3 "; break;
                    case CASA_JOGA_NOVAMENTE: cout << "JR "; break;
                    case CASA_ESPERA:         cout << "ES "; break;
                    default:
                        if (casa < 10) cout << " " << casa << " ";
                        else cout << casa;
                        break;
                }
            }

            cout << "]";
        }
        cout << "\n";
    }

    cout << "======================================================\n";
}

int main() {
    iniciartabuleiro(); // Cria o tabuleiro numerado

    int pos1 = 1, pos2 = 1;      // Posições iniciais dos jogadores
    bool vez1 = true;            // Indica se é a vez do jogador 1
    bool espera1 = false, espera2 = false; // Estados de "espera" dos jogadores

    cout << "🎮 Bem-vindo ao Jogo da Glória! 🎮\n";
    cout << "PV=Perde a vez | V3=Volta 3 | A3=Avança 3 | JR=Joga outra vez | ES=Espera\n";
    cout << "Pressiona ENTER para começar...";
    cin.get();

    // Loop principal do jogo
    while(pos1 < NUM_CASAS && pos2 < NUM_CASAS) {
        clear();
        mostrartabuleiro(pos1, pos2);

        if (vez1) { // Turno do jogador 1
            if (espera1 && pos2 < pos1) {
                cout << "Jogador 1 está à espera...\n";
                vez1 = false;
                cin.get();
                continue;
            }
            espera1 = false;

            cout << "\n→ Jogador 1: ENTER para lançar o dado...";
            cin.get();

            int dado = animarDado();
            
            clear();
            mostrartabuleiro(pos1, pos2);
            cout << "Jogador 1 tirou: " << dado << "\n";
            desenharDado(dado);

            pos1 += dado; // Avança no tabuleiro

            // Verifica casas especiais
            switch(pos1) {
                case CASA_PERDE_VEZ:      cout << "Perdes a vez!\n"; vez1 = false; break;
                case CASA_VOLTA_3:        pos1 -= 3; break;
                case CASA_AVANCA_3:       pos1 += 3; break;
                case CASA_JOGA_NOVAMENTE: cout << "Jogas novamente!\n"; continue;
                case CASA_ESPERA:         espera1 = true; break;
            }

            vez1 = false; // Passa a vez ao jogador 2
        }
        else { // Turno do jogador 2
            if (espera2 && pos1 < pos2) {
                cout << "Jogador 2 está à espera...\n";
                vez1 = true;
                cin.get();
                continue;
            }
            espera2 = false;

            cout << "\n→ Jogador 2: ENTER para lançar o dado...";
            cin.get();

            int dado = animarDado();
            
            clear();
            mostrartabuleiro(pos1, pos2);
            cout << "Jogador 2 tirou: " << dado << "\n";
            desenharDado(dado);

            pos2 += dado; // Avança no tabuleiro

            // Verifica casas especiais
            switch(pos2) {
                case CASA_PERDE_VEZ:      cout << "Perdes a vez!\n"; vez1 = true; break;
                case CASA_VOLTA_3:        pos2 -= 3; break;
                case CASA_AVANCA_3:       pos2 += 3; break;
                case CASA_JOGA_NOVAMENTE: cout << "Jogas novamente!\n"; continue;
                case CASA_ESPERA:         espera2 = true; break;
            }

            vez1 = true; // Passa a vez ao jogador 1
        }
        
        cout << "Pressiona ENTER para continuar...";
        cin.get();
    }

    // Fim do jogo
    clear();
    mostrartabuleiro(pos1, pos2);

    if (pos1 >= NUM_CASAS)
        cout << "\n🏆 Jogador 1 venceu!\n";
    else
        cout << "\n🏆 Jogador 2 venceu!\n";

    return 0;
}
