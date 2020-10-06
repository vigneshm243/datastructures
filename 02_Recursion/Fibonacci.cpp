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

//Fibonacci using recursion
int rfib(int n){
    if (n <= 1){
        return n;
    }
    return rfib(n - 1) + rfib(n - 2);
}

//Fibonacci using recursion and memoization
int F[100];
int mfib(int n){
    if (n == 1 || n == 0){
        F[n] = n;
        std::cout << "mfib n:" << n << endl;
        std::cout << F[n] << endl;
        return n;
    }
    if (F[n - 1] == 0){
        
        F[n - 1] = mfib(n - 1);
        std::cout << "mfib n - 1:" << n - 1 << endl;
        std::cout << F[n - 1] << endl;
    }   
    if (F[n - 2] == 0){
        F[n - 2] = mfib(n - 2);
        std::cout << "mfib n - 2:" << n - 2 << endl;
        std::cout << F[n - 2] << endl;
    }
    return F[n - 1] + F[n - 2];
}


//Bottoms up for DP 
int bottomUpFib(int n){
  if(n == 1 || n == 0){
    return n;
  }
  int twoBehind = 0;
  int oneBehind = 0;
  int fib = 0;
  
  for(int i = 1; i < n; i++){
    fib = twoBehind + oneBehind;
    twoBehind = oneBehind;
    oneBehind = fib;
  }
  return fib;
}

int main(){
    int n;
    std::cout << "Fibonacci number " << endl;
    std::cin >> n; 
    for (int i = 0; i < n; i++){
        F[i] = 0;
    }
    std::cout << mfib(n) << endl;
    return 0;
}