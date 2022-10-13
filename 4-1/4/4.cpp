#include <iostream>
using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff){
    sum = a+b;
    diff = a-b;
}

int main(void){
    int a, b;
    cin >> a >> b;
    int sum, diff;
    int& r_sum = sum;
    int& r_diff = diff;
    getSumDiff(a, b, r_sum, r_diff);
    cout << "sum : " << sum << endl << "diff : " << diff << endl;
    return 0;
}