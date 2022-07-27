#include <iostream>
using namespace std;

class citizenid{
public:
    int id;
    void get_id();
};

void citizenid::get_id(){
    cin>>id;
}

class citizen_age : private citizenid{
private:
    int age;
    //id
    //get_id()
public:
    void getage();
    void display();
};

void citizen_age::getage(){
    get_id();
    cin>>age;
}

void citizen_age::display(){
    cout<<id<<" "<<age;
}

int main(){
    citizen_age cg1;
    cg1.getage();
    cg1.display();
    return 0;
}
