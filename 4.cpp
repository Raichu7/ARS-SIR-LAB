#include<bits/stdc++.h>
using namespace std;
class Stringtype
{
    private:
        char *s;
        int length;
    public:
        Stringtype()
        {
            s='\0';
            length=0;
        }
        Stringtype(const Stringtype &s1)
        {
            s=s1.s;
            length=s1.length;
        }
        Stringtype operator+(Stringtype s1)
        {
            Stringtype temp;
            temp.s = strcat(s,s1.s);
            temp.length = length + s1.length;
            return temp;
        }
        int operator<(Stringtype s1)
        {
            if(strcmp(s,s1.s)<0)
                return -1;
            else if(strcmp(s,s1.s)>0)
                return 1;
            else
                return 0;
        }
        /*bool operator==(Stringtype s1)
        {
            if(strcmp(s,s1.s)==0)
                return true;
            else
                return false;
        }*/
        int operator==(Stringtype s1)
        {
            int k=strcmp(s,s1.s);
            if(k == 0)
                return 1;
            else
                return 0;
        }
        void display()
        {
            if(length==0)
                cout<<"String is empty "<<endl;
            else
                cout<<s<<endl;
        }
        friend istream& operator >>(istream& input,Stringtype &s1)
        {
            cout<<"Enter the string "<<endl;
            s1.s = new char[30];
            input>>s1.s;
            s1.length=strlen(s1.s);
            return input;
        }
        friend ostream& operator <<(ostream& output, Stringtype &s1)
        {
            cout<<"The string is ";
            output<<s1.s;
            cout<<endl;
            output<<"Length :"<<endl;
            output<<s1.length<<endl;
            return output;
        }
};
int main()
{
    Stringtype s1,s2;
    cin>>s1;
    cout<<s1;
    cin>>s2;
    cout<<s2;
    int flag = (s1 == s2);
    if(flag==1)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;
        int flag1 = s1 < s2;
    if(flag1==0)
        cout<<"Both are equal"<<endl;
    else if(flag1 ==-1)
        cout<<"1st string is greater"<<endl;
    else
        cout<<"2nd string is greater"<<endl;
    Stringtype s3 = s1 + s2;
    cout<<s3;
    return 0;
}
