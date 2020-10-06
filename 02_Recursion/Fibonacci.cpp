#include <iostream>
using namespace std;

//Fibonacci using iteration
int fib (int n){
    int a = 0, b = 1, fib;
    if (n <= 1) {
        return n;
    }
    for (int i = 2; i < n; i++ ){
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main(){
    int n;
    std::cout << "Fibonacci number " << endl;
    std::cin >> n;
    std::cout << fib(n) << endl;
    return 0;
}