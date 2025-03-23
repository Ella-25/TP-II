#include <iostream>
using namespace std;

int main(){
    //Locação de string estática
    //Representação clássica através de vetor de char
    char str[10] = "Teste";
    //cout << sizeof(str)
    for(int i = 0; i < 10; i++){
        if(str[i] == '\0') cout << "Caractere de final de string" << endl;
        else cout << str[i] << endl;
    }
    //if(str[5] == '\0') cout << "Caractere de final de string" << endl;

    return 0;
}