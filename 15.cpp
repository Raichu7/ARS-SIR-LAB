#include<bits/stdc++.h>
using namespace std;
class Coordinate
{
    private:
        int x;
        int y;
    public:
        Coordinate()
        {
            x=y=0;
        }
        Coordinate(int q,int w)
        {
            x=q;
            y=w;
        }
        Coordinate(const Coordinate &obj)
        {
            x=obj.x;
            y=obj.y;
        }
        Coordinate operator +(int b)
        {
            Coordinate temp;
            temp.x = x + b;
            temp.y = y + b;
            return temp;
        }
        friend Coordinate operator +(int b, Coordinate a)
        {
            Coordinate temp;
            temp.x = a.x + b;
            temp.y = a.y + b;
            return temp;
        }
        Coordinate operator ++()
        {
            Coordinate temp;
            temp.x= x+1;
            temp.y=y+1;
            return temp;
        }
        Coordinate operator -()
        {
            Coordinate temp;
            temp.x = -x;
            temp.y = -y;
            return temp;
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};
int main()
{
    int x1,x2,y1,y2,a;
    cout<<"Enter the x coordinate"<<endl;
    cin>>x1;
    cout<<"Enter the y coordinate"<<endl;
    cin>>y1;
    Coordinate c1(x1,y1);
    c1.display();
    cout<<"Enter the x coordinate"<<endl;
    cin>>x2;
    cout<<"Enter the x coordinate"<<endl;
    cin>>y2;
    Coordinate c2(x2,y2);
    c2.display();
    cout<<"Enter the x"<<endl;
    cin>>a;
    Coordinate c3 = c1 + a;
    c3.display();
    Coordinate c4 = a + c2;
    c4.display();
    Coordinate c5 = ++c1;
    c5.display();
    Coordinate c6 = -c1;
    c6.display();
    Coordinate c7(c1);
    c7.display();
}
