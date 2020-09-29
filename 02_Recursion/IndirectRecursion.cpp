#include <iostream>
using namespace std;
/* Indirect Recursion: If more than one function is calling one another in
a cycle then it’s known as Indirect Recursion.
Time : O(n)
Space : O(n)
*/
void indirectRec2(int n);
void indirectRec1(int n){
    if (n > 0){
        indirectRec2(n - 1);
        std::cout << n << endl;
    }
}

void indirectRec2(int n){
    if (n > 0){
        indirectRec1(n - 1);
        std::cout << n << endl;
    }
}

int main(){
    cout << "Indirect Recursion" << endl;
    indirectRec1(3);
    return 0;
}