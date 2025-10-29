#include<iostream>
using namespace std;

class Address{
    char cityName[20];
    char stateName[20];
    double pincode;
    public:
    void  acceptAddress(){
        cout<<"Enter city :";
        cin>>cityName;
        cout<<"Enter state :";
        cin>>stateName;
        cout<<"Enter pincode :";
        cin>>pincode;
    }
    void printAddress(){
        cout<<"City :"<<cityName<<"\nState :"<<stateName<<"\nPincode :"<<pincode<<"\n";
    }
};
class student{
    char name[20];
    char courseName[10];
    Address a1;
    public:
    void acceptStudent(){
        cout<<"Enter name of student :";
        cin>>name;
        cout<<"Enter course :";
        cin>>courseName;
        a1.acceptAddress();
    }
    void printStudent(){
        cout<<"\n-----Student details-----\nStudent name :"<<name<<"\nCourse :"<<courseName<<"\n";
        a1.printAddress();
    }
};
int main(){
//    Address a1;
//    a1.acceptAddress();
//    a1.printAddress();

    student s1;
    s1.acceptStudent();
    s1.printStudent();
}