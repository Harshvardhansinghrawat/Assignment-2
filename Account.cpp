#include<iostream>
using namespace  std;
class account
{
private:
    int balance;
public:
    account(int bal)
    {
        balance=bal;
        if(balance<0)
        {
             balance=0;
             cout<<"The initial balance was invalid\n";
             credit();
        }
        credit();
    }
    credit()
    {
        int add;
        cout<<"Enter the amount to add\n";
        cin>>add;
        balance=balance+add;
        debit();
    }
    debit()
    {
        int withdrawl;
        cout<<"Enter the amount to withdraw\n";
        cin>>withdrawl;
        if(withdrawl>balance)
        {
            cout<<"Debit amount exceed account balance\n";
            debit();
        }
        else
        {
            balance=balance-withdrawl;
        }
        getbalance();
    }
    getbalance()
    {
        cout<<"The current balance of the account is: "<<balance<<endl;
    }
};
int main()
{
    int bal1,bal2;
    cout<<"Input the initial balance of the first account\n";
    cin>>bal1;
    account acc1(bal1);
    cout<<"Input the initial balance of the second account\n";
    cin>>bal2;
    account acc2(bal2);
    return 0;
}

