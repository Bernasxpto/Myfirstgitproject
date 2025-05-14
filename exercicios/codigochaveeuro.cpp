
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    for(int i = 0; i < 5; i++) cout << rand() % 50 + 1 << " ";
    cout << endl;
    cout << "Estrelas: ";
    for (int i = 0; i < 2; i++) cout << rand () % 12 + 1 << " ";
    cout << endl;

}