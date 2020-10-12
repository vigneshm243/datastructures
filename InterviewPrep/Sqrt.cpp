#include <iostream>
using namespace std;
//Navie approach
int sqrtNaive(int n){
    int i = 1, result = 1;
    //loop till finding square root
    while (result <= n){
        i++;
        result = i * i;
    }
    return i - 1;
}

//Binary search way
int sqrtBinary(int n){
    if (n == 0 || n == 1){
        return n;
    }
    int low = 1, high = n, ans = 1, mid;
    //taking mid
    

    while (low <= high){
        mid = (low + high) / 2;    
        if (mid * mid == n)
            return mid;
        //mid^2 is greater then high is reduced
        if (mid * mid > n){
            high = mid - 1;
        }
        //mid^2 is less then low is increased
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    std::cout << "Enter the value to find sqrt of " << endl;
    std::cin >> n;
    std::cout << "Naive Sqrt of " << n << " is " << sqrtNaive(n) << endl;
    std::cout << "Binary Sqrt of " << n << " is " << sqrtBinary(n) << endl;
    return 0;
}