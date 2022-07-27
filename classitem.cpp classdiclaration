#include <iostream>
#include <string>
using namespace std;

const int size=4;

class student{
  private:
    int marks[size];
    
  public:
    int id;
    string name;
    string dept;
    
    void set_data();
    void display();
};

void student::set_data(){
    cout<<"Ener the Marks ";
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    cout<<"Enter the id,name,dept: "
    cin>>id>>name>>dept;
}

void student::display(){
    cout<<id<<endl<<name<<endl<<dept<<endl;
        for(int i=0;i<size;i++){
            cout<<marks[i]<<" ";
        }
}

int main()
{
    student s1;
    
    s1.set_data();
    s1.display();

    return 0;
}
