#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    int x = atoi(argv[1]);
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i=0;i<x;i++)
    {
        cout<<c<<" ";
        a = b;
        b = c ;
        c = a+b;
    }
}
