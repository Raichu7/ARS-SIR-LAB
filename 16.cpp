#include<bits/stdc++.h>
int gcd(int x,int y)
{
    if(x==0)
        return y;
    return gcd(y%x,x);
}
using namespace std;
int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c=a*b;
    int x = gcd (a,b);
    cout<<"Product is"<<c<<endl;
    cout<<"LCM is"<<c/x<<endl;
}
