#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "message.h"
using namespace std;

// Constructor, Destructor
MessageBook::MessageBook(){}
MessageBook::~MessageBook(){}
// Member Functions
void MessageBook::AddMessage(int number, const string& message){
    if(messages_.find(number) == messages_.end()){
            messages_.insert(make_pair(number, message));
    }
    else{
            messages_.erase(number);
            messages_.insert(make_pair(number, message));
    }
}
void MessageBook::DeleteMessage(int number){
    messages_.erase(number);
}
vector<int> MessageBook::GetNumbers(){
    vector<int> stored_numbers;
    for(map<int, string>::iterator it = messages_.begin(); it != messages_.end(); it++){
        stored_numbers.push_back(it->first);
    }
    return stored_numbers;
}
const string& MessageBook::GetMessage(int number){
    return messages_[number];
}

