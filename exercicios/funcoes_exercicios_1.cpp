#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Função que soma um número inteiro com um decimal
 * @param x Número inteiro
 * @param y Número decimal
 * @return Soma dos dois números
 */
float soma(int x, float y){

    return x + y;
}

/**
 * @brief Função que aceita duas referências de inteiros
 *        multiplica estes dois valores e soma 10
 * @param x primeira ref. número inteiro
 * @param y Segunda ref. número inteiro
 * @return Soma dos dois números
 */

int multiplica(int &x, int &y){
    return (x * y) + 10;
}


/**
 * @brief Funçõa que aceita dois inteiros e retorna
 *        o resto divisão entre estees dois números
 * @param x Primeiro número inteiro 
 * @param y Segundo número inteiro
 * @return Resto da divisão entre os dois números
 */

float resto(int x, int y){
    return x % y;
}

/**
 * @brief Função que aceita um array de inteiros e
 *        retorna o valor do indice 0
 * @param x Array de inteiros
 * @return do indice 0
 */

int array(int x[]){
    return x[0];
}

/**
 * @brief Função que aceita m array de inteiros, um inteiro 
 *        e devolve o indice referente ao inteiro passado
 * @param x Array de inteiros
 * @param y Inteiro
 * @return Indice referente ao ponteiro passado como valor y
 */

int array2(int x[], int y){
    return x[y];

}

/**
 * @brief Função que aceita um array de inteiros, um inteiro
 *        e devolve todos os valores do array até ao indice
 *        passado como valor y
 * @param x Array de inteiros
 * @param y Interio
 */
void array3(int x[], int y){
    for(int i=0; i<y; i++){
        cout << x[i] << " ";
    }
    cout << endl;

}

struct ponto{
    int x;
    int y;
};
ponto pontos[] = {{1,2},{3,4},{5,6}};
/**
 * @brief Função que aceita um array de pontos e imprime o valor 
 *        x de cada ponto
 * @param x Array de pontos
 */
void funcaopontos (ponto x[]){
    for(int i=0; i<3; i++){
        cout << x[i].x << " ";
    }
    cout << endl;
}


int dobro(int x){
    return x*2;
}
/**
 * @brief Função que aceita um inteiro e devolve o seu dobro 
 *        recorrendo à função dobro(int) definida acima
 * @param x Inteiro 
 * @return Dobro do inteiro 
 */

int dobroRec (int x){
    return dobro(x);
}

/**
 * @brief funçãoo que aceita um array de inteiros com 10
 *        elementos e devolve a soma de todos os elemeentos 
 * @param x Array de inteiros
 * @return Soma de todos os elemetos do array
 */

int somaarray(int x[]){
    int soma=0;
    for( int i=0; i<10; i++){
        soma+=x[i];
    }
    return soma;
}

#define CONSTANTE_PLANCK  6.62607015e-34

float calculoenergia(float f, float h=CONSTANTE_PLANCK){
    return h*f;
}




float calculoVelociadaLuz(float f, float lambda){
    return f*lambda;
}

/**
 * Elabora uma função que calcula a fórmula apresentada pelo professor
 * resolvente de uma equação de 3º grau
 * 
 * (-b±√(b*b-4ac))/(2a)
 * sqrt(x)
 * 
 */

void calculoformularesolvente (float a, float b, float c){
    float x1, x2;
    x1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
    x2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;

}










int main(){
//
// //   float f;
//    cout << "Frequência";
//    cin >> f;
//    cout << "Energia: " << calculoenergia(f) << endl;
//

//float f, lambda;
//cout << "Frequência: ";
//cin >> f;
//cout << "Comprimento da onda: ";
//cin >> lambda;
//cout << "Velociadade da Luz" << calculoVelociadaLuz(f, lambda) << endl;

calculoformularesolvente(2,20,3);




    return 0;

}







