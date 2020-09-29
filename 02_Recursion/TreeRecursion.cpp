#include <iostream>
using namespace std;
/* Tree Recursion: If a recursive function calling itself for more than 
one time then it’s known as Tree Recursion.
Time : O(2^n)
Space : O(n)
*/
void treeRec(int n){
    if (n > 0){
        std::cout << n << endl;
        treeRec(n - 1);
        treeRec(n - 1);
    }
}

int main(){
    cout << "Tree Recursion" << endl;
    treeRec(3);
    return 0;
}