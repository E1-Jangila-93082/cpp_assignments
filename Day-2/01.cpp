#include<stdio.h>

class employee{
    private:
    int empID ; 
    char empName[20];
    float empSalary;
    public:
    void AcceptData(){
        printf("Enter Employee ID: ");
        scanf("%d",&empID);
        printf("Enter Employee Name: ");
        scanf("%s",empName);
        printf("Enter Employee Salary: ");
        scanf("%f",&empSalary);
    }
    void PrintData(){
        printf("Employee ID: %d\n",empID);
        printf("Employee Name: %s\n",empName);
        printf("Employee Salary: %.2f\n",empSalary);
    }
};

int main(){
    employee emp;
    emp.AcceptData(); 
    emp.PrintData();  
    return 0;
}