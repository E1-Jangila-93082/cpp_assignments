#include<iostream>
using namespace std;

class Tdate{
        int day;
        int month;
        int year;
    public:
        void acceptDate(){
            cout<<"Enter Day: ";
            cin>>day;
            cout<<"Enter Month: ";
            cin>>month;
            cout<<"Enter Year: ";
            cin>>year;
        }
        void setDay(int d){
            cout<<"Enter Day: ";
            this->day=d;
        }

        void printDate_dd_mm_yyy(){
            cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<"\n";
        }
        void printDate_dd_month_yyyy(){
            char* months={"January","February","March","April","May","June","July","August","September","October","November","December"};
            cout<<"Date: "<<day<<"/"<<months[month-1]<<"/"<<year<<"\n";
        }
};

int main(){
    Tdate date;
    date.acceptDate();
    date.printDate_dd_mm_yyy();
    date.printDate_dd_month_yyyy();
    return 0;
}