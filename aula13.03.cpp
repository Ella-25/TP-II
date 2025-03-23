#include <iostream>
using namespace std;

//Sequência de Fibonacci: padrão para prever fenômenos depois de um tempo. 0,1,1,2,3,5,8,13,21... é a soma dos dois números anteriores

long fib(int n){
    int i;

    long penultimo = 0;
    long ultimo = 1;
    long atual = n;

    for (i=2; i<=n; i++){
        //calcula o i-ésimo termo
        atual = ultimo + penultimo;
        //prepara ultimo e penultimo para eventual próxima iteração
        penultimo = ultimo;
        ultimo = atual;
    }
    return atual;
}
