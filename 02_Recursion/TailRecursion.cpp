#include <iostream>
using namespace std;
/* Tail Recursion:  If a recursive function calling itself and that recursive
call is the last statement in the function then it’s known as Tail Recursion. 
Time : O(n)
Space : O(n)
*/
void tailRec(int n){
    if (n > 0){
        std::cout << n << endl;
        tailRec(n - 1);
    }
}

/*
Time : O(n)
Space : O(1)--- because only one activation record is needed in case of loop
*/
void tailRecLoop(int n){
    while (n > 0){
        std::cout << n << endl;
        n--;
    }
}

int main(){
    cout << "Tail Recursion" << endl;
    tailRec(5);
    cout << "Tail Recursion converted to loop" << endl;
    tailRecLoop(5);
    return 0;
}