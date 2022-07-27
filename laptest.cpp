#include <iostream>
#include<string>

using namespace std;
const int s=2;
class cart{
    string ProductName[s];
    int ProductQuantitis[s];
    int Price_per_Unit[s];
  public:
    string Customer_Name;
    void getinfo();
    int TotalAmount();
};
void cart::getinfo(){
    cin>>Customer_Name;
    for(int i=0;i<s;i++){
        cin>>ProductName[i]>>ProductQuantitis[i]>>Price_per_Unit[i];
    }
}
int cart::TotalAmount(){
    int total=0;
    for(int i=0;i<s;i++){
       total=total + Price_per_Unit[i]*ProductQuantitis[i];
    }
    return total;
}

int main()
{
    cart c1;
    c1.getinfo();
    cout<<c1.TotalAmount();

    return 0;
}
