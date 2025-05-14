#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Função que aceita um array com 20 elementos inteiros
 *        e devolve a média dos seus valores
 * @param array Array de inteiros
 * @return Retorna a média dos valores do array
 */

// float media(int elementos[]){
//     int soma = 0;
//     for(int i = 0; i<20; i++ ){
//         soma += elementos[i];
//     }
//     return soma/20;
// }

/**
 * @brief Função que aceita um array de inteiros
 * @param array Array de inteiros
 * @return A palavra "Par" se a média for par
 *         A palavra "Impar" se a media for impar
 */

    string media2(int inteiros[]){
        int tamanhoDoArray = sizeof(inteiros)/sizeof(inteiros[0]);
        float soma = 0.0;
        float media = 0;
        for(int i = 0; i<tamanhoDoArray; i++){
            soma += inteiros[i];

        }
        media = soma/tamanhoDoArray;
       
        if(int(media) %2 == 0 ){
            return "Par";
        }
        else{
            return "Impar";
        }
       
    }






int main(){






}