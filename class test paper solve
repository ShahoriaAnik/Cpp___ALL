#include <iostream>
using namespace std;

class Employee{
    int working_hour;
    int salary_per_hour;
    float Total_Salary;
    
    public:
        void getInfo(int a,int b);
        void AddSal();
        void bonus();
        void display();
};

void Employee::getInfo(int a,int b){
    working_hour=a;
    salary_per_hour=b;
}

void Employee::AddSal(){
    Total_Salary=working_hour*salary_per_hour;
    bonus();
}

void Employee::bonus(){
    if(Total_Salary>500){
        Total_Salary+=50;
    }
}

void Employee::display(){
    cout<<Total_Salary;
}

int main()
{
    Employee emp1;
    emp1.getInfo(8,80);
    emp1.AddSal();
    emp1.display();

    return 0;
}
