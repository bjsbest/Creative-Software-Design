#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target, cnt;
    cin >> target;
    for(int i=0; i<n; i++){
        if(target == arr[i]){
            cnt++;
        }
    }
    cout << "target value : " << target << endl << "target count : " << cnt << endl;
    delete[] arr;
    return 0;
}