#pragma once

class Account{
        private:
                int id;
                int balance;
        public:
                Account();

                int getID();
                int getBalance();
                void setID(int id);
                void setBalance(int balance);
};

class AccountManager{
private:
    Account** accounts;
    int numAccount;
public:
    AccountManager();
    AccountManager(int numAccount);
    ~AccountManager();

    Account* getAccounts(int index);

    void createAccount();
    void depositMoney(Account* a1, int amount);
    void withdrawMoney(Account* a1, int amount);
    void transferMoney(Account* a1, Account* a2, int amount);
    void check();
};

