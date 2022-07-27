#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int a,int b);
    Rectangle(int a);
    void display();
};

Rectangle::Rectangle(){
    length=0;
    breadth=0;
}

Rectangle::Rectangle(int a,int b){
    length=a;
    breadth=b;
}

Rectangle::Rectangle(int a){
    length=a;
    breadth=a;
}

void Rectangle::display(){
    cout<<length<<" "<<breadth<<endl;
}

int main()
{

    Rectangle r1,r2(15,16),r3(5);
    r3.display();

    return 0;
}
