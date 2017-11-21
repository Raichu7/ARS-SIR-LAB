#include<bits/stdc++.h>
using namespace std;
class Object
{
    private:
        int a,b;
    public:
        Object()
        {
            a=b=0;
        }
        Object(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"Value of a "<<a<<endl;
            cout<<"Value of b "<<b<<endl;
        }
        Object (Object &obj)
        {
            a=obj.a;
            b=obj.b;
        }
};
int main()
{
    Object obj1(10,20);
    cout<<"The value of obj 1"<<endl;
    obj1.display();
    Object obj2(20,30);
    cout<<"The value of obj 2"<<endl;
    obj2.display();
    Object obj3(obj2);
    cout<<"The value of obj 1 using obj 2"<<endl;
    obj3.display();
    return 0;
}
