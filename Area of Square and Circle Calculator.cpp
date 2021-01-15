#include<iostream>

using namespace std;

class Shape

{

protected:

int dim1,dim2;

public:

Shape(int a,int b)

{

dim1=a;

dim2=b;

}

virtual void area()

{ }

};

class Rectangle:public Shape

{

public:

Rectangle(int a, int b):Shape(a,b)

{}

void area()

{ cout<<dim1*dim2<<endl; }

};

class Circle:public Shape

{

public:

Circle(int a,int b):Shape(a,b)

{}

void area()

{

cout<<3.14*dim1*dim2<<endl;

}

};

int main()

{

Rectangle r(5,6);

Shape *s;

s=&r;

s->area();

Circle c(5,5);

s=&c;

s->area();

}