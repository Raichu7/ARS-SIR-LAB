#include<bits/stdc++.h>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            real=img=0;
        }
        Complex(int a,int b)
        {
            real=a;
            img=b;
        }
        Complex operator * (Complex obj)
        {
            Complex temp;
            temp.real = real*obj.real + img*obj.img;
            temp.img = real*obj.img + img*obj.real;
            return temp;
        }
        void operator = (Complex obj)
        {
            real = obj.real;
            img = obj.img;
        }
        void display()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the real part ";
    cin>>a;
    cout<<"Enter the img part ";
    cin>>b;
    Complex c1(a,b);
    c1.display();
    cout<<"Enter the real part ";
    cin>>c;
    cout<<"Enter the img part ";
    cin>>d;
    Complex c2(c,d);
    c2.display();
    Complex c3;
    c3=(c1*c2);
    cout<<"Product of the 2 numbers ";
    c3.display();
    Complex c4;
    c4 = c3;
    cout<<"Using assignment operator to copy ";
    c4.display();
    return 0;
}
