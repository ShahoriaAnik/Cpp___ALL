#include <bits/stdc++.h>
using namespace std;
class employee{
    string name;
    int id;
    string position;
    float salary;
    float increment;
    public:
    employee();//this is the constractor,it's name should be the class name
    float Increment();
    void display();
    
};
employee::employee(){
        cin>>name>>id>>position>>salary>>increment;
    }
float employee::Increment(){
    salary=salary+((salary*increment)/100);
    return salary;
}
void employee::display(){
    cout<<name<<" "<<id<<" "<<position<<" "<<salary<<" "<<increment;
}

int main()
{
    employee obj1;
    obj1.Increment();
    obj1.display();
    

    return 0;
}
