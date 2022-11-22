#include <iostream>
#include <string>
#include "my_container.h"
using namespace std;

int main(){
    int n1, n2, n3;
    cin >> n1;
    MyContainer<double> con1(n1);
    cin >> con1;
    cout << con1 << endl;

    cin >> n2;
    MyContainer<string> con2(n2);
    cin >> con2;
    cout << con2 << endl;

    cin >> n3;
    MyContainer<int> con3(n3);
    cout << con3 << endl;

    return 0;
}