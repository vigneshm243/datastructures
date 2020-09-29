#include <iostream>
using namespace std;
/* Head Recursion:  If a recursive function calling itself and that recursive
call is the first statement in the function then it’s known as Head Recursion. 
Time : O(n)
Space : O(n)
*/
void headRec(int n){
    if (n > 0){
        headRec(n - 1);
        std::cout << n << endl;
    }
}

/*
Time : O(n)
Space : O(1)--- because only one activation record is needed in case of loop
*/
void headRecLoop(int n){
    int i = 1;
    while (i <= n){
        std::cout << i << endl;
        i++;
    }
}

int main(){
    cout << "Head Recursion" << endl;
    headRec(5);
    cout << "Head Recursion converted to loop" << endl;
    headRecLoop(5);
    return 0;
}