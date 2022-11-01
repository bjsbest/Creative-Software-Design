#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A{
    public:
    virtual string getTypeInfo(){
        return "This is an instance of class A";
    }
};

class B : public A{
    public :
    virtual string getTypeInfo(){
        return "This is an instance of class B";
    }
};

class C : public B{
    public :
    virtual string getTypeInfo(){
        return "This is an instance of class C";
    }
};

void printObjectTypeInfo1(A* object){
    cout << object->getTypeInfo() << endl;
}
void printObjectTypeInfo2(A& object){
    cout << object.getTypeInfo() << endl;
}


int main(){
    vector<A*> arr;
    string input;
    while(true){
        cin >> input;
        if(input == "quit"){
            for(int i=0; i<arr.size(); i++){
                printObjectTypeInfo1(arr[i]);
                printObjectTypeInfo2(*(arr[i]));
            }
            for(int i=0; i<arr.size(); i++){
                delete arr[i];
            }
            break;
        }
        else if(input == "A"){
            arr.push_back(new A);
        }
        else if(input == "B"){
            arr.push_back(new B);
        }
        else if(input == "C"){
            arr.push_back(new C);
        }
    }
    return 0;
}