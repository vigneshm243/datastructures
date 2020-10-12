#include <iostream>
using namespace std;

string getBinary(int n, int bitsize = 8){
    string binary = "";
    while (n > 0){
        if (n % 2 == 0){
            binary = "0" + binary;
        }
        else{
            binary = "1" + binary;
        }
        n /= 2;   
    }
    while (binary.length() < bitsize){
        binary = "0" + binary;
    }
    return binary;
}

int main(){
    int ip;
    std::cout << "Enter input for reversing bits " << endl;
    std::cin >> ip;
    string binary = getBinary(ip);
    int n = binary.length();
    for (int i = 0; i < n / 2; i++) 
        swap(binary[i], binary[n - i - 1]); 
    std::cout << std::stoi(binary, nullptr, 2);
;
    return 0;
}