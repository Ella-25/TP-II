#include <iostream>
using namespace std;

int produto_digitos(int num){
    if(num < 10) return num;
    return (num % 10) * produto_digitos(num/10); 
}

int persistencia (int num){
    if(num < 0) return 0;
    return 1 + persistencia(produto_digitos(num));
}

int main(){
    cout << persistencia(999);
    return 0;
}