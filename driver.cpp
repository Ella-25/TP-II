#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase("EU USO O COMPUTADOR SEM TECLADO");
    cout << sizeof(frase) << endl; //sizeof é processado em tempo de compilação, uma variavel da classe tipo string tem pré-alocado um espaço de memória
    cout << frase.size() << endl; //tempo de execução. Primeiro compila (sizeof) e depois executa (size)

    return 0;
}