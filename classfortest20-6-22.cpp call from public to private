#include<iostream>
using namespace std;
class employee{
    float salaryh;
    float workh;
    void getInfo(float a,float b);
 public:
    float totalSal;
    float addSal();
    float bonus();
    void display();

};
void employee::getInfo(float a,float b){
    salaryh=a;
    workh=b;
}
float employee::addSal(){
    
    float a,b;
    cin>>a>>b;
    getInfo(a,b);
    totalSal=salaryh*workh;
    return totalSal;
}
float employee::bonus(){
    if(totalSal>=500){
        totalSal=totalSal+50;
    }
    return totalSal;
}
void employee::display(){
    cout<<totalSal<<endl;
}
int main(){
    employee emp1;
    emp1.addSal();
    emp1.bonus();
    emp1.display();
  return 0;
}
