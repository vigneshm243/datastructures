#include <iostream>
using namespace std;
//Sum of natural no using recursion
int sumOfNaturalNo(int n) {
    if (n > 1)
        return n + sumOfNaturalNo(n - 1);
    else
        return 1;
}
//Sum of natural no using formula
int sumOfNaturalNoFormula(int n) {
    if (n > 1)
        return n + sumOfNaturalNo(n - 1);
    else
        return 1;
}
int main(){
    std::cout << "Sum of n natural no"<< endl;
    std::cout << sumOfNaturalNo(5) << endl;
    std::cout << "Sum of n natural no using formula"<< endl;
    std::cout << sumOfNaturalNoFormula(5) << endl;
}