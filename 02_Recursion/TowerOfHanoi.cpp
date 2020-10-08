#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C){
    if (n > 0){
        TOH(n - 1, A, C, B);
        std::cout << "Moving disc " << n << " from tower " << A << " to tower " << C << " using " << B << endl;
        TOH(n - 1, B, A, C);
    }
}

int main (){
    int n;
    std::cout << "Tower of Hanoi no of discs " << endl;
    std::cin >> n;
    TOH(n, 1, 2, 3);
    return 0;
}