#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "message.h"
using namespace std;

int main(){
    MessageBook book;
    string command;
    while(true){
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "add"){
            int myNumber;
            string myString;
            cin >> myNumber;
            getline(cin, myString);
            const string& r_myString = myString;
            book.AddMessage(myNumber, r_myString);
        }
        else if(command == "delete"){
            int myNumber;
            cin >> myNumber;
            book.DeleteMessage(myNumber);
        }
        else if(command == "list"){
            for(int i=0; i<(book.GetNumbers()).size(); i++){
                cout << (book.GetNumbers())[i] << " : " << book.GetMessage((book.GetNumbers())[i]) << endl;
            }
        }
        else if(command == "print"){
            int myNumber;
            cin >> myNumber;
            cout << book.GetMessage(myNumber) << endl;
        }
    }
    return 0;
}                                          