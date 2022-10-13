#include "accounts.h"
#include <iostream>
#include <string>
using namespace std;

// Account Class
Account::Account(){
    id = -1;
    balance = 0;
}
int Account::getID(){return id;}
int Account::getBalance(){return balance;}
void Account::setID(int id){
    this->id = id;
}
void Account::setBalance(int balance){
    this->balance = balance;
}

//AccountManager : Constructor, Destructor
AccountManager::AccountManager(){
    numAccount = 0;
    accounts = new Account*[numAccount]; // account 동적할당
    for(int i=0; i<numAccount; i++){
        accounts[i] = NULL;
    }
}
AccountManager::AccountManager(int numAccount){
    this->numAccount = numAccount;
    this->accounts = new Account*[this->numAccount]; // 크기가 numAccount인 Account* 배열 동적할당
    for(int i=0; i<numAccount; i++){
        accounts[i] = new Account;
    }
}
AccountManager::~AccountManager(){
    for(int i=0; i<numAccount; i++){
	    delete accounts[i];
    }
	delete[] accounts; // 동적할당 해제
}

// AccountManager Member Functions
Account* AccountManager::getAccounts(int index){return (this->accounts)[index];}
void AccountManager::createAccount(){
    for(int i=0; i<numAccount; i++){
	    if(accounts[i]->getID() == -1){
		    accounts[i]->setID(i);
		    cout << "Account for user " << i << " registered" << endl;
		    break;
	    }
    }
}
void AccountManager::depositMoney(Account* a1, int amount){
    if(a1->getID() == -1){
        cout << "Account does not exist" << endl;
    }
    else{
        if(a1->getBalance() + amount > 1000000){
            cout << "Failure : Deposit to user " << a1->getID() << " " << amount << endl;
        }
        else{
            a1->setBalance(a1->getBalance() + amount);
            cout << "Success : Deposit to user " << a1->getID() << " " << amount << endl;
        }
    }
}
void AccountManager::withdrawMoney(Account* a1, int amount){
    if(a1->getID() == -1){
        cout << "Account does not exist" << endl;
    }
    else{
        if(a1->getBalance() - amount < 0){
            cout << "Failure : Withdraw from user " << a1->getID() << " " << amount << endl;
        }
        else{
            a1->setBalance(a1->getBalance() - amount);
            cout << "Success : Withdraw from user " << a1->getID() << " " << amount << endl;
        }
    }
}
void AccountManager::transferMoney(Account* a1, Account* a2, int amount){
    if(a1->getID() == -1 || a2->getID() == -1){
        cout << "Account does not exist" << endl;
    }
    else{
        if(a1->getBalance() - amount < 0 || a2->getBalance() + amount > 1000000){
            cout << "Failure : Transfer from user " << a1->getID() << " to user " << a2->getID() << " " << amount  << endl;
        }
        else{
            a1->setBalance(a1->getBalance() - amount);
            a2->setBalance(a2->getBalance() + amount);
            cout << "Success : Transfer from user " << a1->getID() << " to user " << a2->getID() << " " << amount  << endl;
        }
    }
}
void AccountManager::check(){
    for(int i=0; i<numAccount && accounts[i]->getID() != -1; i++){
        cout << "Balance of user " << accounts[i]->getID() << " : " << accounts[i]->getBalance() << endl; 
    }
}
