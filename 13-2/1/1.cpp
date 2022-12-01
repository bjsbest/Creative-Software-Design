#include <iostream>
using namespace std;

class A{
    public:
        A(int n){
            //implement something here
            if(n<=0){
                throw "";
            }

            cout << "ID=" << n << ": constructed\n";
            n_ID = n;
            data = new int[n];
        }
        ~A(){
            cout << "ID=" << n_ID << ": destroyed\n";
            //implement something here
            delete[] data;
        }

    private:
        int* data = NULL;
        int n_ID;
};

int main(){
    try{
        A a(3);
        A b(2);
        
        {
        A c(1);
        A d(0);
        A e(-1);
        }
    }
    //implement something here
    catch(string& str){
        cout << str;
    }
    cout << "Caught in the main" << endl;
    return 0;
}
