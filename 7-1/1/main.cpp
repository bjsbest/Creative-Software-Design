#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "sorted.h"
using namespace std;

int main(){
	SortedArray vec;
	while(true){
		string command;
		cin >> command;
		if(command == "ascend"){
			for(int i=0; i<(vec.GetSortedAscending()).size(); i++){
				cout << (vec.GetSortedAscending())[i] << " ";
			}
			cout << endl;
		}
		else if(command == "descend"){
			for(int i=0; i<(vec.GetSortedDescending()).size(); i++){
				cout << (vec.GetSortedDescending())[i] << " ";
			}
			cout << endl;
		}
		else if(command == "min"){
			cout << vec.GetMin() << endl;
		}
		else if(command == "max"){
			cout << vec.GetMax() << endl;
		}
		else if(command == "quit"){
			break;
		}
		else{
			vec.AddNumber(stoi(command));
		}
	}
	return 0;
}
