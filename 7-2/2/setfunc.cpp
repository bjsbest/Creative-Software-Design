#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
#include "setfunc.h"
using namespace std;

set<int> parseSet(const string& str){ // string으로 입력된 문자열을 집합으로 변환
    set<int> set0;
    for(int i=0; i<str.length(); i++){
        if(str[i] != "{" && str[i] != " " && str[i] != "}"){
            set0.insert(atoi(str[i]));
        }
    }
    return set0;
}
void printSet(const set<int>& set0){
    cout << "{ ";
    for(set<int>::iterator it = set0.begin(); it != set0.end(); it++){
        cout << *it;
        if(it != set0.end() - 1){
            cout << ", ";
        }
        else{
            cout << "}";
        }
    }
}
set<int> getIntersection(const set<int>& set0, const set<int>& set1){
    set<int> newset_intersect;
    set<int>::iterator it2 = set1.begin();
    for(set<int>::iterator it = set0.begin(); it != set0.end(); it++){
        if(set1.find(*it) != it2.end()){
            newset_intersect.insert(*it);
        }
    }
    return newset_intersect;
}
set<int> getUnion(const set<int>& set0, const set<int>& set1){
    set<int> newset_union;
    for(set<int>::iterator it1 = set0.begin(); it != set0.end(); it1++){
        newset_union.insert(*it1);
    }
    for(set<int>::iterator it2 = set1.begin(); it != set1.end(); it2++){
        newset_union.insert(*it2);
    }
    return newset_union;
}
set<int> getDifference(const set<int>& set0, const set<int>& set1){
    set<int> newset_difference;
    // set0에 있는 게 set1에도 있으면 안 넣고, set1에는 없으면 넣는다.
    set<int>::iterator it2 = set1.begin();
    for(set<int>::iterator it = set0.begin(); it != set0.end(); it++){
        if(set1.find(*it) == it2.end()){
            newset_difference.insert(*it);
        }
    }
    return newset_difference;
}