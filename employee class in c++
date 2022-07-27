#include <iostream>
#include<string>

using namespace std;
class employee{
    private:
    float salary;
    float yearly_increment;
    public:
    string name;
    string position;
    int id;
    void getInfo(string s,int i,string s1,float a,float b);
    void increment();
    void display();
    
};
void employee :: getInfo(string s,int i,string s1,float a,float b){
        name=s;
        id=i;
        position=s1;
        salary=a;
        yearly_increment=b;
    }
void employee::increment(){
    int yr;
    cout<<endl<<"enter the years :"<<endl;
    cin>>yr;
    for(int i=0;i<yr;i++){
        salary = salary+(salary*yearly_increment);
    }
}
void employee::display(){
    cout<<"the current salary is: "<<salary;
}

int main()
{
    employee emp1,emp2;
    emp1.getInfo("michael",514,"Junioe_SQA",35000,0.07);
    emp1.display();
    
    emp1.increment();
    emp1.display();

    return 0;
}
