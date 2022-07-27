#include <iostream>

using namespace std;
class test{
    int value;
    public:
    test();
    test(int a);
    test operator -(test s);
    friend void display(test s);//the friend function
    ~test(){}
};
test::test(){
    value=0;
}
test::test(int a){
    value=a;
}
test test::operator -(test s){
    test temp;
    temp.value=value-s.value;
    return temp;
}
void display(test s){//friend function
    cout<<s.value;
}

int main()
{
    test obj1(80),obj2(50),obj3;
    obj3=obj1-obj2;
    display(obj3);//the friend calling

    return 0;
}
