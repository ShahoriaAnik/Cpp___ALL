#include <iostream>
#include<string>
using namespace std;

class student{
protected:
    int id_no;
    string name;
};

class result: public student{
private:
    int marks1,marks2;
public:
    void assign_Values(int a,string s,int m1,int m2){
        id_no=a;
        name=s;
        marks1=m1;
        marks2=m2;
    }
    void display(){
        cout<<id_no<<" "<<name<<" "<<marks1<<" "<<marks2<<endl;
    }
};

int main()
{
    result r1;
    r1.assign_Values(2143,"Samin",34,65);
    r1.display();

    return 0;
}
