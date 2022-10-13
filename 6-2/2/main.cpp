#include <iostream>
#include <string>
#include "accounts.h"
using namespace std;

int main(){
    AccountManager account_set(10);

    while(true){
        cout << "Job?" << endl;
        char command;
        cin >> command;
        if(command == 'Q'){
            break;
        }
        else if(command == 'N'){
            account_set.createAccount();
            account_set.check();
        }
        else if(command == 'D'){
            int target_id, amount_of_money;
            cin >> target_id >> amount_of_money;
                if(target_id > 9){
                    cout << "Invalid Input" << endl;
                }
                else{
                    account_set.depositMoney(account_set.getAccounts(target_id), amount_of_money);
                    account_set.check();
                }
        }
        else if(command == 'W'){
            int target_id, amount_of_money;
            cin >> target_id >> amount_of_money;
            if(target_id > 9){
                cout << "Invalid Input" << endl;
            }
            else{
                account_set.withdrawMoney(account_set.getAccounts(target_id), amount_of_money);
                account_set.check();
            }
        }
        else if(command == 'T'){
            int target_1, target_2, amount_of_money;
            cin >> target_1 >> target_2 >> amount_of_money;
            if(target_1 >9 || target_2 > 9){
                cout << "Invalid Input" << endl;
            }
            else{
                account_set.transferMoney(account_set.getAccounts(target_1), account_set.getAccounts(target_2), amount_of_money);
                account_set.check();
            }
        }
    }
    return 0;
}
