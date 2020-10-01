#include <iostream>
using namespace std;
/*
Taylor series using recursion to calculate e^x
*/
double TaylorSeries(int x, int n) {
    static double p = 1, f = 1;
    double r;
    //exit conditon
    if (n == 0){
        return 1;
    }
    // hear recursion call
    r = TaylorSeries(x, n - 1);
    //updating power of x
    p = p * x;
    //Factorial
    f = f * n;
    
    return (r + p / f);
}

int main(){
    int x = 4, n = 15;
    std::cout << "Taylor series for calulating e^x :" << TaylorSeries(x, n) << endl;
    return 0;
}
