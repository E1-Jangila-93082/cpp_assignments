#include<iostream>
using namespace std;

class account {
    private:
        int acc_no;
        char name[50];
        float balance;
    public:
        void acceptData(){
            cout<<"Enter Account Number: ";
            cin>>acc_no;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Balance: ";
            cin>>balance;
        }
        void displayData(){
            cout<<"Account Number: "<<acc_no<<"\n";
            cout<<"Name: "<<name<<"\n";
            cout<<"Balance: "<<balance<<"\n";
        }
};
int main() {
    account acc;
    acc.acceptData();
    acc.displayData();
    return 0;
}
