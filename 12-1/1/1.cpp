#include <iostream>
#include <string>
using namespace std;

template <typename T>
void mySwap(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int i1, i2; double d1, d2; string s1, s2;
    cin >> i1 >> i2;
    mySwap(i1, i2);
    cout << "After calling mySwap() : " << i1 << " " << i2 << endl;

    cin >> d1 >> d2;
    mySwap(d1, d2);
    cout << "After calling mySwap() : " << d1 << " " << d2 << endl;

    cin >> s1 >> s2;
    mySwap(s1, s2);
    cout << "After calling mySwap() : " << s1 << " " << s2 << endl;

    return 0;
}