#include <iostream>
using namespace std;

class complex{
  int real;
  int imag;
  
  public:
    complex();
    complex(int r,int i);
    complex operator +(complex a){//this the overloding function
        complex temp;
        temp.real=real+a.real; 
        temp.imag=imag+a.imag;
        return temp;
    }
    void display();
};

complex::complex(){
    real=0;
    imag=0;
}

complex::complex(int r,int i){
    real=r;
    imag=i;
}

void complex::display(){
    cout<<real<<" "<<imag<<endl;
}

int main()
{
    complex c1(7,8),c2(9,5),c3;
    c1.display();
    c2.display();           //c1.opeartor ++()
    c3=c1+c2;           //c3=c1.operator +(c2)
    
    c3.display();
    
    return 0;
}
