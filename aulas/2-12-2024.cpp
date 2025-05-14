
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int x;


//int main(){
//    cout << "Digite um número:" << endl;
//    cin >> x;
//
//    for(int i = 0;i<=10; i++)
//
//    cout << x << " x " << i << " = " << x * i << endl;
//
//
//
  //  return 0;
//}

string nome = "nome";

int main(){
    cout << "Digite um nome:";
    cin >> nome;

    int numCaracteres = nome.length();
    
    for(int x=numCaracteres-1; x>=0; x--)
    cout << nome[x];

}