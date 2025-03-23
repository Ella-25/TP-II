#include <iostream>
#include <time.h>//compilador tdm
using namespace std;

bool flip2(){
    int resultado;
    resultado = rand()%2;
    if(resultado == 0{
        return false;
    })else{
        return true;
    }

bool flip(){
    return rand()%2;
}

int main(int argc, char* argv[ ]){ //argc é contagem de argumentos (o 1º elemento é sempre ocupado) e o outro é vetor de stings (ponteiro para vetor - ponteiro)
    srand(time(0));
    int cara = 0, coroa = 0;
    if(argc == 2){ //se o contador de parâmetros da main for maior que um (ex.2), deve haver uma quantidade pronta de jogadas a fazer
        for(int i = 0; i < atoi(argv[1]); i++){ //atoi= char (a) to int
            if(flip()) cara++;
            else coroa++;
        }
    }else { //pergunta se o usuário quer jogar a primeira vez
        char jogar = 's';
        cout << "Deseja jogar? (s/n): ";
        cin >> jogar;
        while(jogar != 'n'){ //enquanto jogar for diferente de 'n' (qualquer simbolo), irá jogar quantas vezes o usuário quiser
            cout << "Resultado: >CARA<" << endl;
            cara++;
        }else{
            cout << "Resultado: >COROA<" << endl;
            coroa++;
        }
        cout << "Deseja jogar novamente? (s/n): ";
        cin >> jogar;
    }
    cout << "Quantidade"

    return 0;
}
    return; //valor booleano
}