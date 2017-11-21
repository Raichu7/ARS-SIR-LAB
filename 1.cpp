#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
class Fraction
{
    private:
        int num;
        int den;
    public:
        Fraction()
    {
        num=den=0;
    }
    Fraction(int a,int b)
    {
        num=a;
        den=b;
    }
    Fraction operator +(Fraction obj)
    {
        Fraction temp;
        temp.num = num*obj.den + den*obj.num;
        temp.den = den*obj.den;
        return temp;
    }
    Fraction operator -(Fraction obj)
    {
        Fraction temp;
        temp.num = num*obj.den - den*obj.num;
        temp.den = den*obj.den;
        return temp;
    }
    Fraction operator *(Fraction obj)
    {
        Fraction temp;
        temp.num = num*obj.num;
        temp.den = den*obj.den;
        return temp;
    }
    bool operator == (Fraction obj)
    {
        if(num==obj.num && den == obj.den)
            return true;
        else
            return false;
    }
    void display()
    {
        int x = gcd(num,den);
        num = num / x;
        den = den / x;
        if(num!=0)
            cout<<num<<"/"<<den<<endl;
        else
            cout<<"0"<<endl;
    }
};
int main()
{
    int a,b,c,d;
    cout<<"Enter the numerator ";
    cin>>a;
    cout<<"Enter the denominator ";
    cin>>b;
    Fraction f1(a,b);
    f1.display();
    cout<<"Enter the numerator ";
    cin>>c;
    cout<<"Enter the denominator ";
    cin>>d;
    Fraction f2(c,d);
    f2.display();
    Fraction f3;
    f3 = f2+f1;
    cout<<"The sum is : ";
    f3.display();
    cout<<"The difference is : ";
    f3=f1-f2;
    f3.display();
     cout<<"The product is : ";
    f3=f2*f1;
    f3.display();
    bool flag = f1==f2;
    if(flag==true)
        cout<<"Fractions are equal"<<endl;
    else
        cout<<"Fraction are not equal"<<endl;
}
