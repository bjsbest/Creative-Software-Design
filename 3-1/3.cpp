#include <iostream>
#include <string>
using namespace std;

int add(int a, int b){
    return a+b;
}
string add(string str1, string str2){
    return str1 + "-" + str2;
}
float add(float a, float b = 0.9){
    return a+b;
}

int main(){
    int i1, i2;
    string s1, s2;
    float f1;

    cin >> i1 >> i2 >> s1 >> s2 >> f1;
    cout << add(i1, i2) << endl << add(s1, s2) << endl << add(f1);
    return 0;
}