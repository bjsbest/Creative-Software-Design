#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "sorted.h"
using namespace std;

SortedArray::SortedArray(){
}
SortedArray::~SortedArray(){
    for(int i=0; i<numbers_.size(); i++){
        numbers_.pop_back();
    }
}

void SortedArray::AddNumber(int num){
    numbers_.push_back(num);
}
vector<int> SortedArray::GetSortedAscending(){
    sort(numbers_.begin(), numbers_.end());
    return numbers_;
}
vector<int> SortedArray::GetSortedDescending(){
    sort(numbers_.rbegin(), numbers_.rend());
    return numbers_;
}
int SortedArray::GetMax(){
    return (this->GetSortedDescending())[0];
}
int SortedArray::GetMin(){
    return (this->GetSortedAscending())[0];
}
