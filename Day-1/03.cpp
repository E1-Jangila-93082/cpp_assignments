#include<iostream>

struct employee {
    private:
    int empId;
    char empName[10];
    double empSalary;

    public:
    void AcceptData(){
        printf("Enter Employee ID: ");
        scanf("%d", &empId);
        printf("Enter Employee Name: ");
        scanf("%s", empName);
        printf("Enter Employee Salary: ");
        scanf("%lf", &empSalary);
    }
    void printData(){
        printf("Employee ID: %d\n", empId);
        printf("Employee Name: %s\n", empName);
        printf("Employee Salary: %.2lf\n", empSalary);
    }
};

int main() {
    employee emp;
    emp.AcceptData();
    emp.printData();
    return 0;
}