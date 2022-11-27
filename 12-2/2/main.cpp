#include <iostream>
#include "list.h"
using namespace std;

int main(){
    int array[5] = {1,2,4,5,6 };
    int array2[4] = {1,3,5,7 };

    List<int> li(array, 5);
    List<int> li2(array2, 4);

    //implement here
    li.merge(li2);

    cout << li << endl; // 1,1,2,3,4,5,5,6,7

    return 0;
}