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
        void setDay(){
            int d;
            cout<<"Enter Day: ";
            cin>>d;
            this->day=d;
        }
        int  getDay(){
            return day;
        }
        bool validateDate(){
            if(month<1 || month>12){
                cout<<"Invalid Month\n";
                return false;
            }
            int maxDay;
            if(month==2){
                bool isLeap=(year%4==0 && year%100!=0) || (year%400==0);
                if(isLeap){
                    maxDay=29;
                }
                else{
                    maxDay=28;
                }
            }
            else if(month==4 || month==6 || month==9 || month==11){
                maxDay=30;
            }
            else{
                maxDay=31;
            }
            if(day<1 || day>maxDay){
                cout<<"Invalid Day\n";
                return false;
            }
            else{
                return true;
            }   
        }
        void printDate_dd_mm_yyy(){
            cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<"\n";
        }
        void printDate_dd_month_yyyy(){
            const char *months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
            cout<<"Date: "<<day<<"/"<<months[month-1]<<"/"<<year<<"\n";
        }
};
int main(){
    Tdate date;
    date.acceptDate();
    if(date.validateDate()){
        cout<<"Valid Date\n";
        date.printDate_dd_mm_yyy();
        date.printDate_dd_month_yyyy();
        date.setDay();
        cout<<"Date set to :"<<date.getDay()<<"\n";
        date.printDate_dd_mm_yyy();
        date.printDate_dd_month_yyyy();
    }
    else{
        cout<<"Invalid Date\n";
    }
    
    return 0;
}