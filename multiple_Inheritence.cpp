#include <iostream>
#include <string>
using namespace std;

class Person{
  private:
    string name;
    int age;
  protected:
    
  public:
    void get_info_p(string n,int a){
        name=n;
        age=a;
    }
    void display_p(){
        cout<<name<<" "<<age<<" ";
    }
};

class Employee{
    private:
        int id;
        string dept;
    protected:
    
    public:
        void get_info_e(int i,string d){
            id=i;
            dept=d;
        }
    void display_e(){
        cout<<id<<" "<<dept<<" ";
    }
};

class Teacher : public Person, protected Employee{
    private:
        int salary;
        float increment;
    protected:
    //get_info_e(),display_e()
    public:
    //get_info_p(),display_p()
    void get_info_t(string n,int a,int i,string d,int s,float inc){
        get_info_e(i,d);
        get_info_p(n,a);
        salary=s;
        increment=inc;
    }
    void display_t(){
        display_p();
        display_e();
        cout<<salary<<" "<<increment<<endl;
    }
};

int main()
{
    Teacher t1;
    t1.get_info_t("Samin",30,234234,"CSE",50000,0.1);
    t1.display_t();
    return 0;
}
