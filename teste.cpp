#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}
#include <iostream>
 
using namespace std;
 
int main() {
 
    // Adição de números
    cout << 3+3 << endl;
    // Subtração de números
    cout << 3-3 << endl;
    // Multiplicação de números
    cout << 3*3 << endl;
    // Divisão de números
    cout << 3/3 << endl;
    // Resto de Divisão
    cout << 5%3 << endl;
    
    // Variáveis sempre minúsculas ou camel case, nunca deve começar com um número
    int qntLivros = 5;
    int x; // posso colocar x, y, z para facilitar, Ex: int x, z, y;
    x = 25;
    // int x; x = 25
    cout << qntLivros * x << endl;
    cout << qntLivros + x << endl;
    cout << qntLivros - x << endl;
    // Int qntLivros = 5
    cout << qntLivros * 2 << endl;
    cout << qntLivros - 2 << endl;
    cout << qntLivros + 2 << endl;
 
 
    bool isTrue = true;
    bool isHigh;
    isHigh = true;
 
    float altura = 1.75;
    float peso; // Posso definir vários floats, Ex: float peso, gordura, altura;
    peso = 34.6;
 
    double altura2 = 1.75;
    double peso2; // Mesma coisa
    peso2 = 34.6;
 
    char letra = 'a';
    char letra2; // Mesma coisa
    letra2 = 'b';
 
    string nome = "Lucas"; // String são vários chars, mas para simplificar colocamos "string";
    string sobrenome;
    sobrenome = "Santos";
 
    // 2 * pi * r
    const float PI = 3.1416; // Constante é um número que nunca muda
    const int X = 2;
 
    cout << X * PI * 5 << endl;
 
    cout << X * PI * 5 << endl;
 
    float valor;
 
    cout << "indique o valor do raio:";
    cin >> valor;
    cout << X * PI * valor << endl;
 
    return 0;
 
}    



// Operadores lógicos: 
    // ==    Igual
    // !=    Diferente
    // >     Maior
    // <     Menor
    // >=    Maior ou igual
    // <=    Menor ou igual

    // &&
    // ||

    // o resto de divisão (%) do rand é para dizer até que número o programa vai gerar aleatoriamente

    int main(){
        
      int  x = 1;
      int  y = 5;  





      
        
        
        
        if( x == 1 || y == 5 ){
            cout << "um deles bate certo" << endl;
        }else{
            cout << "nop......" << endl;
        }
         


       int x = 1;
       int y = 2;
       int z = 3;

       if ( x ==2){
        cout << "x é igual a dois" << endl;
       }else if ( y == 3){
        cout << "z é igual a quatro" << endl;
       }else if(z == 4){
        cout << "z é igual a quatro" << endl;
       }else{
        cout << "Nenhym dos valores é igual a 2, 3 ou 4" <<endl;
       }
       
       

    }


   


