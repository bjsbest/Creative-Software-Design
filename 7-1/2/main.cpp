#include <iostream>
#include <string>
#include <string.h>
#include <list>
#include "CharList.h"
using namespace std;

int main(){
	while(true){
		string input_string;
		cin >> input_string;
		int n = input_string.length();
	        char char_type_input[n+1];
		strcpy(char_type_input, input_string.c_str());
		if(input_string == "quit"){
			break;
		}
		else{
			CharList string_list(char_type_input);
			cout << boolalpha << string_list.CheckPalindrome() << endl;
		}
	}
	return 0;
}
