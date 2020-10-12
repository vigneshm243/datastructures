#include <iostream>
using namespace std;

//Return value for character
int value(char c){
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
}

//Return roman to decimal
int romanToDecimal(string & str){
    int res = 0;
    //looping thru all characters
    for (int i = 0; i < str.length(); i++){
        int s1 = value(str[i]);
        //if not the last character
        if (i + 1 < str.length()){
            int s2 = value(str[i + 1]);
            //if value of 2nd term is lesser or equal
            if (s1 >= s2)
                res += s1;
            else{
                res += s2 - s1;
                i++;
            }

        }
        else{
            res += s1;
        }
    }
    return res;
}

//driver code
int main() {
    string iput;
    std::cout << "Enter roman numerals:" << endl;
    std::cin >> iput;
    std::cout << "Numeric output:" << romanToDecimal(iput) << endl;
    return 0;
}