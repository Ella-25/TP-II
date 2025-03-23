#include <iostream>
using namespace std;

void funcaoRecursiva(int a){
    cout << a;
    funcaoRecursiva(a-1);
}