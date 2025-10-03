#include <iostream>

using namespace std;

class BankAccount {
    private:
        char *accountTitle;
        int balance, limit, drawn = 0;
    public:
        BankAccount() {accountTitle = " "; balance = 0; limit = 0;}
        BankAccount(char *title, int bal) {accountTitle = title; balance = bal; limit = 0;}
        BankAccount(char *title, int bal, int lim) {accountTitle = title; balance = bal; limit = lim;}
        void deposit(int amount) {balance += amount;}
        void withdraw(int amount) {
            if (balance < amount) {cout << "Withdraw failed , insufficient funds" << endl;}
            else {
                if (limit - drawn < amount) {cout << "Withdraw Failed : daily limit is " << limit << endl;}
                else {balance -= amount; drawn += amount;}
            }
        }
};

int main() {
    char *t;
    int b, l;
    cin >> t >> b >> l;
    BankAccount a(t, b, l);
    

}