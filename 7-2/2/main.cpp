#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
#include "setfunc.h"
using namespace std;

int main(){
    while(true){
        string inputSet1, setOperator, inputSet2;
        getline(cin, inputSet1, "}");
        cin >> setOperator;
        getline(cin, inputSet2, "}");
        if(setOperator == "0"){
            break;
        }
        else if(setOperator == "+"){
            printSet(getUnion(parseSet(inputSet1), parseSet(inputSet2)));
        }
        else if(setOperator == "-"){
            printSet(getDifference(parseSet(inputSet1), parseSet(inputSet2)));
        }
        else if(setOperator == "*"){
            printSet(getIntersection(parseSet(inputSet1), parseSet(inputSet2)));
        }
    }
    return 0;
}