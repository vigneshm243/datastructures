#include <iostream>
using namespace std;

//Using Euclidean algo - GCD does not change if smaller no is subracted from bigger no
//This is exploited by dividing the bigger no by smaller no, we use modulu to fast track the operation
int GCD(int a, int b){
    //when gcd is found
    if (a == 0){
        return b;
    }
    return GCD(b % a, a);
}

int main(){
    int a, b;
    std::cout << "Enter a and b for finding GCD" << endl;
    std::cin >> a >> b;
    std::cout << "The GCD is " << GCD(a, b) << endl;
    return 0;
}