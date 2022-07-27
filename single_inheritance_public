#include <iostream>
#include <string>
using namespace std;

class Employee{
    string name;
    int age;
    string doj;
    
    public:
        void getInfo(string s,int a,string d){
            //cin>>name>>age>>doj;
            name=s;
            age=a;
            doj=d;
        }
        void display(){
            cout<<name<<endl<<age<<endl<<doj<<endl;
        }
};

class Developer : public Employee{
    int id;
    int salary;
    
    public:
    void getInfo2(int i,int s){
        id=i;
        salary=s;
    }
        void display2(){
            display();
            cout<<id<<endl<<salary<<endl;
        }
        
};

class HR : public Employee{
    public:
        // name,age,doj
        int id;
        int salary;
};

int main()
{
    Developer d1;
    d1.getInfo("Samin",34,"25 January");
    d1.getInfo2(3434,54000);
    d1.display2();
    

    return 0;
}
