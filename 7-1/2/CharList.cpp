#include <iostream>
#include <string.h>
#include <list>
#include "CharList.h"
using namespace std;

CharList::CharList(const char* str){
	for(int i=0; i<strlen(str); i++){
		mystring_.push_back(str[i]);
	}
}
CharList::~CharList(){
}

bool CharList::CheckPalindrome(){
	int check = 0; 
	while(mystring_.size()>1){
		if(mystring_.front() == mystring_.back()){
			mystring_.pop_front();
			mystring_.pop_back();
		}
		else{
			check = -1;
			break; // not palindrome
		}
		if(check == 0){
			return true;
		}
		else{
			return false;
		}
	}
}
std::list<char> CharList::GetAll(){
	return mystring_;
}
