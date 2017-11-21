#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    swap(a,b);
    cout<<"The value of A after swapping "<<a<<endl;
    cout<<"The value of B after swapping "<<b<<endl;
    return 0;
}
