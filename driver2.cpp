#include <iostream>
#include <string>
using namespace std;

int main(){
    string frase;
    cout << "Digite a frase em LM usando TECLADO: ";
    getline(cin, frase);

    size_t pos = 0; //tipo de variavel que aceita valores bem altos. Começará a partir da posição zero
    while((pos = frase.find("TECLADO",pos)) != string::npos){ //enquanto for diferente de npos vai fazer alguma coisa. () Cria uma clausula para busca do objeto (frase)
        frase.insert(pos + 7, "E MOUSE");
        pos = pos + 16;
    } 

    cout << frase << endl;

    return 0;
}