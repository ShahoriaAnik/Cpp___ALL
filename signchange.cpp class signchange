#include <iostream>
#include<string>
using namespace std;

class sample{
  int x,y,z;
  void get_data(int a,int b,int c);
  
  public:
    void display();
    void display2();
    
    void changeSign(sample obj);
    
};

void sample::changeSign(sample obj){
    obj.x = -obj.x;
    obj.y = -obj.y;
    obj.z = -obj.z;
    
    cout<<"After changing the sign: "<<obj.x<<" "<<obj.y<<" "<<obj.z<<endl;
    
}

void sample::get_data(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}

void sample::display()
{
    int d,f,g;
    cin>>d>>f>>g;
    get_data(d,f,g);
    cout<<"Before changing Sign: ";
    cout<<x<<" "<<y<<" "<<z<<endl;
}

void sample::display2()
{
    cout<<"After changing original Sign: ";
    cout<<x<<" "<<y<<" "<<z<<endl;
}

int main()
{
    sample s1;
    s1.display();
    
    s1.changeSign(s1);
    
    s1.display2();
    

    return 0;
}
