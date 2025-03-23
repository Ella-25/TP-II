//escreva em C++ uma função recursiva
//1) menorRecursiva(V, tamanho) para encontrar o menor elemento de um vetor de números inteiros
 
#include <iostream>
using namespace std;

int menorRecursiva(int V[], int n){
    //caso base de parada antes da chamada recursiva
    if(n == 1) return V[0];

    //implementar de modo a retornar o menor elemento
    int menorTamanho = menorRecursiva(V, n - 1);
    if(V[n - 1] < menor) return vet[n-1];
    return menor;
}

int main(){
    const int n = 10;
    int V[n] = {5, 10, 15, 20, 25, -5, -10, -15, -20, -25};

    cout << "O menor elemento de um vetor de números inteiros é: " << menorRecursiva(V, n);

    return 0;
}