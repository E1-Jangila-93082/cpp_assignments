#include<iostream>
using namespace std;

class Tdate{
    int day;
    int month;
    int year;
    public:
    void AcceptDate(){
        cout<<"Enter date :";
        cin>>this->day;
        cout<<"Enter month :";
        cin>>this->month;
        cout<<"Enter year :";
        cin>>this->year;
    }
    void printDate(){
        cout<<"Date of birth : "<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
    }
};
class person{
    char name[20];
    int age;
    Tdate date_of_birth;
    public:
    void acceptPersonData(){
        cout<<"Enter name :";
        cin>>this->name;
        cout<<"Enter age :";
        cin>>this->age;
        date_of_birth.AcceptDate();
    }
    void printPersonData(){
        cout<<"\nPerson's name :"<<this->name<<", Age :"<<this->age<<"\n";
        date_of_birth.printDate();
    }
};
int main(){
//    Tdate d1;
//    d1.AcceptDate();
//    d1.printDate();
      
    person p1;
    p1.acceptPersonData();
    p1.printPersonData();
}