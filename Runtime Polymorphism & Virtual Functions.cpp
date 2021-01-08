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

class Triangle:public Shape

{

public:

Triangle(int a,int b):Shape(a,b)

{}

void area()

{

cout<<0.5*dim1*dim2<<endl;

}

};

int main()

{

Rectangle r(5,6);

Shape *s;

s=&r;

s->area();

Triangle t(4,5);

s=&t;

s->area();

}