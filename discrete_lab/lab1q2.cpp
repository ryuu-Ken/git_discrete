#include<iostream>
using namespace std;

class bank{
    string name;
    int no;
    string hlname;
    double balance;

    public:
    bank (string bname, int accNo, string hname, double bal){
    name = bname;
    no = accNo;
    hlname = hname;
    balance = bal;
    }
    void show_details();
    void deposit(double amount);
    void withdraw(double amount);
    void getBalance();
    void action(int op);
    
};

void bank::show_details(){
        cout<< name << endl << "Account Holder: " << no <<endl << "Acc no: "<< hlname << endl << "Current balance: "<<balance <<endl;
    }

    void bank::deposit(double amount){
        cout<<"Enter the amount to deposit"<<endl;
        cin>>amount;
        balance+= amount;
        cout<<"Deposited Amount: "<<amount<<endl;
    }

    void bank::withdraw(double amount){
        cout<<"Enter the amount to withdraw:"<<endl;
        cin>>amount;
        if (amount<= balance){
            balance -= amount;
            cout<<"Withdrawn amount: "<<amount <<endl;
        }
            else{
                cout<<"Insufficient Balance!"<<endl;
            }
        }
    void bank::getBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }

    void bank::action(int op){
        double amount;
        cout<<"=========Actions=========="<<endl<<"Press 1. to deposit the money"<<endl<<"Press 2. withdraw the amount"<<endl;
        cin>>op;
        switch (op){
            case 1:
            deposit(amount);
            break;

            case 2:
            withdraw(amount);
            break;

            default:
            cout<<"Enter valid operation"<<endl;
        }

    }

int main(){
    int op;
    bank acc("Rastriya Banijya Bank", 011223244, "Kushal Magar", 5000);
    acc.show_details();
    acc.action(op);

    return 0;
}