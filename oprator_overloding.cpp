#include <iostream>
using namespace std;

class Weight{
    int x;
    
    public:
    Weight(){
        x=0;
    }
    Weight(int a){
        x=a;
    }
    Weight operator ++(){
        Weight temp;
        temp.x=x+5;
        return temp;
    }
    void display(){
        cout<<x<<endl;
    }
};

int main() {
    Weight w1(5),w2;
    w1.display();
    w2= ++w1;
    w2.display();

    return 0;
}
