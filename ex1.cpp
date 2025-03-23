#include <iostream>
using namespace std;

void trocaValor(){
    a = a + b;
    b = a - b;
    a = a - b;
}

void trocaValor2(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int a, b;
    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;
    //trocaValor(a,b):
    trocaValor2(&a, &b)
    cout << "Novo valor de a: " << a << endl;
    cout << "Novo valor de b: " << b << endl;
}