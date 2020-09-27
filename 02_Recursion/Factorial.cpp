#include <iostream>
using namespace std;
int factorial(int r){
    if (r == 1){
        return 1;
    }
    return factorial(r - 1) * r;
}
int main(){
    int i;
    std::cout << "Enter number for which you want to find factorial" << endl;
    std::cin >> i;
    std::cout << factorial(i);
    return 0;
}