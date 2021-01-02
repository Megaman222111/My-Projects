
#include<iostream>
using namespace std;
class Shape
{
    protected:
    int a,b;
    public:
    Shape(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
};
class Rectangle:public Shape
{
    public:
    Rectangle(int a1,int b1):Shape(a1,b1)
    {}
    int rarea()
    {
        return a*b;
    }
};
class Triangle:public Shape
{
    public:
    Triangle(int a1,int b1):Shape(a1,b1)
    {}
    int tarea()
    {
        return 0.5*a*b;
    }
};
int main()
{
    int m,n;
    cout<<"Give value of the two dimensions: ";
    cin>>m>>n;
    Rectangle r(m,n);
    Triangle t(m,n);
    cout<<"Area of Rectanle: "<<r.rarea()<<endl;
    cout<<"Area of Triangle: "<<t.tarea();
}