#include<stdio.h>

class Tdate{
    private:
    int day;
    int month;
    int year;
    public:
    void AcceptDate(){
        printf("Enter Day: ");
        scanf("%d",&day);
        printf("Enter Month: ");
        scanf("%d",&month);
        printf("Enter Year: ");
        scanf("%d",&year);
    }
    void PrintDate_dd_mm_yyyy(){
        printf("Date: %02d/%02d/%04d\n",day,month,year);
    }
    void PrintDate_dd_month_yyyy(){
        const char* monthNames[12] = {"January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December"};
        printf("Date: %02d/%s/%04d\n",day,monthNames[month-1],year);
    }
    bool ValidateDate(){
        if(month < 1 || month > 12){
            printf("Invalid month!\n");
            return false;
        }
        int maxDays;
        if(month==2){
                bool isLeapYear = (year%4==0) && (year%100!=0) || (year%400==0);
                if(isLeapYear){
                    maxDays=29;
                }
                else{
                    maxDays=28;
                }
            }
        else if(month==4||month==6||month==9||month==11){
            maxDays=30;
        }
        else{
            maxDays=31;
        }
        
        if(day<1 || day>maxDays){
            printf("Invalid day!\n");
            return false;
        }
        else
            return true;
    }
};

int main(){
        Tdate date;
        date.AcceptDate();
        int valid = date.ValidateDate();
        printf("Validity = %d\n",valid);
        if(valid){
            date.PrintDate_dd_mm_yyyy();
            date.PrintDate_dd_month_yyyy();
        }
        else
            printf("Provided date is INVALID!\n");
        return 0;
}