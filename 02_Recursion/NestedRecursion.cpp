#include <iostream>
using namespace std;
/* Nested Recursion: In this recursion, a recursive function 
will pass the parameter as a recursive call.That means 
“recursion inside recursion”.
Time : O(2^n)
Space : O(n)
*/
int nestedRec(int n){
    if (n > 100) 
        return n - 10; 
  
    // A recursive function passing parameter 
    // as a recursive call or recursion 
    // inside the recursion 
    return nestedRec(nestedRec(n + 11)); 
}

int main(){
    std::cout << "Nested Recursion" << endl;
    std::cout << nestedRec(5) << endl;
    return 0;
}