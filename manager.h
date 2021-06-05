#include <iostream>
#include "account.h"
#ifndef MANAGER_H
#define MANAGER_H

class Manager{
    public:
    void run();
    int sign_in(vector<Account> &Accounts);
    vector<Account> initialise_all_accounts();
    void delete_account(vector<Account> &Accounts);
    void print_all_accounts(vector<Account> &Accounts);
    void save_all_data(vector<Account> &Accounts);
    void create_account(vector<Account> &Accounts);
};

#endif // MANAGER_H
