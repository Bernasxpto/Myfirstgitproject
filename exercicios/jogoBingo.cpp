#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAX_NUMBER       76
#define MAX_NUM_OF_CARDS 5

int tmpCard[25];

struct numero{
    int num;
    bool sts;
};

numero painel[MAX_NUMBER];




int main(){ 
    
    for (int i = 0; i < MAX_NUMBER; i++){
        painel[i].num = i + 1;
        painel[i].sts = false;
    }
    
    //Inserir uma seed para o random
    srand(time(0));

    for(int i = 0; i < 25; i++){ 
        
        tmpCard[i] = rand() % MAX_NUMBER;
        //Verificar se o numero ja foi gerado
        for(int j = 0; j < i; j++){
            if (tmpCard[j] == tmpCard[i])
            i--;
            break;
        }
    }
    //Mostra o cartão no terminal
    for(int i = 0; i < 25; i++){
        cout << tmpCard[i] << " ";
        if ((i+1)% 5 == 0)cout << endl;
    }    



}
    

