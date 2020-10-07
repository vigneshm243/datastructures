#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    while (n > 1){
        factorial *= n;
        n--;
    }
    return factorial;
}

int nCr(int n, int r){
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

int main(){
    int n, r;
    std::cout << "Enter value for N" << endl;
    std::cin >> n;
    std::cout << "Enter value for R" << endl;
    std::cin >> r;
    std::cout << "NCR" << endl;
    std::cout << nCr(n, r);
    return 0;
}