#include<bits/stdc++.h>
using namespace std;
class Matrix
{
        int r,c;
        int **mat;
        int **mat1;
    public:
        Matrix()
        {
            r=c=0;
        }
        Matrix(int a,int b)
        {
            r=a;
            c=b;
            mat = new int*[r];
            for(int i=0;i<r;i++)
            {
                mat[i]=new int[c];
            }
        }
        Matrix operator +(Matrix a)
        {
            Matrix temp(r,c);
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    temp.mat[i][j] = mat[i][j] + a.mat[i][j];
                }
            }
            delete mat1;
            return temp;
        }
        Matrix operator*(Matrix a)
        {
            Matrix temp(r,a.c);
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<a.c;j++)
                {
                    temp.mat[i][j]=0;
                    for(int k=0;k<a.r;k++)
                    {
                        temp.mat[i][j]=temp.mat[i][j]+mat[i][k]*a.mat[k][j];
                    }
                }
            }
            delete mat1;
            return temp;
        }
        Matrix operator!()
        {
            Matrix temp(c,r);
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    temp.mat[j][i] = mat[i][j];
                }
            }
            delete mat1;
            return temp;
        }
        friend istream& operator >>(istream& input, Matrix &a)
        {
            for(int i=0;i<a.r;i++)
            {
                for(int j=0;j<a.c;j++)
                {
                    input>>a.mat[i][j];
                }
            }
            return input;
        }
        friend ostream& operator <<(ostream& output, Matrix &a)
        {
            for(int i=0;i<a.r;i++)
            {
                for(int j=0;j<a.c;j++)
                {
                    output<<a.mat[i][j]<<" ";
                }
                output<<endl;
            }
            return output;
        }
};
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows"<<endl;
    cin>>r1;
    cout<<"Enter the number of columns"<<endl;
    cin>>c1;
    Matrix m1(r1,c1);
    cin>>m1;
    cout<<m1;
    cout<<"Enter the number of rows"<<endl;
    cin>>r2;
    cout<<"Enter the number of columns"<<endl;
    cin>>c2;
    Matrix m2(r2,c2);
    cin>>m2;
    cout<<m2;
    cout<<"The sum is"<<endl;
    if(r1==r2 && c1 == c2)
    {
        Matrix m3 = m1 + m2 ;
        cout<<m3;
    }
    else
    {
        cout<<"Addition not possible"<<endl;
    }
    cout<<"The product is"<<endl;
    if(r1==c2)
    {
        Matrix m4 = m1 * m2;
        cout<<m4;
    }
    else
    {
        cout<<"Multiplication not possible"<<endl;
    }
    Matrix m5=!m1;
    cout<<"Transpose of 1st matrix"<<endl;
    cout<<m5;
    cout<<"Transpose of 2nd matrix"<<endl;
    Matrix m6=!m2;
    cout<<m6;
    return 0;
}

