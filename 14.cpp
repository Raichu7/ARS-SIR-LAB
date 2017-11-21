#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string "<<endl;
    getline(cin,s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    cout<<"Length is "<<i<<endl;
    int c=0;
    for(int j=0;j<i;j++)
    {
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            c++;
    }
    cout<<"Vowels are "<<c;
    return 0;
}
