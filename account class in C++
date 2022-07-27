#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
class Account{
    private:
    float Balance;
    public:
    string Owner_Name;
    int AC_ID;
    void getInfo(string  n, int id, float blnc);
    void DepositMoney();
    void display();
    
};
void Account :: getInfo(string  n, int id, float blnc){
    Owner_Name=n;
    AC_ID=id;
    Balance= blnc;
}

void Account :: DepositMoney(){
     int dp;
     cout<<"enter deposite amounts: ";
     cin>>dp;
     Balance=Balance+dp;
}
void Account :: display(){
    cout<<Balance;
}
int main()
{
    Account ac1,ac2;
    cout<<"Account1: \n";
    ac1.getInfo("Michael",12056051,35080.67);
    ac1.DepositMoney();
    cout<<"Account2: \n";
    ac2.getInfo("Samuel",12056052,75003.35);
    ac2.DepositMoney();
    cout<<"\nTotal balance of Account1: ";
    ac1.display();
    cout<<endl;
    cout<<"\nTotal balance of Account2: ";
    ac2.display();
    cout<<endl<<endl;

    getch ();
}
