#include<iostream>
using namespace std;
class sample{
    int x;
  public:
      void getValue(int a);
      void show();
};
void sample::getValue(int a){
    //cin>>a;
    x=a;
}
void sample::show(){
    cout<<x<<endl;
}
int main(){
    
    sample obj[3];
    int a=10;
    for(int i=0;i<3;i++){
        obj[i].getValue(a++);
    }
    for(int i=0;i<3;i++){
        obj[i].show();
        
    }
    
    return 0;
}
