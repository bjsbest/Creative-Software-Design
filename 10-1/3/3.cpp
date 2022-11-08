#include <iostream>
#include <vector>
#include <string>
using namespace std;

class B{
    public:
        virtual ~B() {}
};
class C : public B{
    public:
        void test() { cout << "C::test()" << endl; }
};
class D : public B{
    public:
        void test() { cout << "D::test()" << endl; }
};

int main(){
    vector<B*> arr;
    string command;
    while(true){
        cin >> command;
        if(command == "B"){
            arr.push_back(new B);
        }
        else if(command == "C"){
            arr.push_back(new C);
        }
        else if(command == "D"){
            arr.push_back(new D);
        }
        else if(command == "0"){
            for(int i=0; i<arr.size(); i++){
                C* c = dynamic_cast<C*>(arr[i]);
                if(c){
                    c->test();
                }
                D* d = dynamic_cast<D*>(arr[i]);
                if(d){
                    d->test();
                }
            }
            for(int i=0; i<arr.size(); i++){
                delete arr[i];
            }
            break;
        }
    }
    return 0;
}