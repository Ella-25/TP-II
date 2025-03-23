//ex Fibonacci de forma recursiva

#include <iostream>
using namespace std;

long fibR(int n){ //fibR = fibonacci recursivo
    if(n<=1) return n;
return fibR(n-1) + fibR(n-2);
}

//É uma indicativa de que não seja recursão de cauda, pois tem duas chamadas recursivas
//Recursão de cauda tem apenas uma chamada recursiva no fim