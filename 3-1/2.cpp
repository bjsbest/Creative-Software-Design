#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1;
    cin >> str2;
    string newString = str1 + str2;
    cout << newString << endl << newString[0] << endl << newString[newString.length() - 1];
    return 0;
}