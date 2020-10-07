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
//NCR using formula
int nCr(int n, int r){
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}
//NCR using Pascal triangle and recursion

int nCrPascal(int n, int r){
    if (n == r || r == 0)
        return 1;
    return nCrPascal(n - 1, r - 1) + nCrPascal(n - 1, r);
}

int main(){
    int n, r;
    std::cout << "Enter value for N" << endl;
    std::cin >> n;
    std::cout << "Enter value for R" << endl;
    std::cin >> r;
    std::cout << "NCR" << endl;
    std::cout << nCrPascal(n, r);
    return 0;
}