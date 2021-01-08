#include<iostream>

using namespace std;

class Father

{

int f_age;

public:

Father( int a)

{

f_age=a;

}

virtual void show()

{

cout<<"Age of father is: "<<f_age<<endl;

}

};

class Son:public Father

{

int s_age;

public:

Son(int f, int s):Father(f)

{

s_age=s;

}

void show()

{

cout<<"Age of Son is: "<<s_age;

}

};

int main()

{

Son so(20,40);

Father fa(40);

Father *fb;

fb=new Father(40);

fa.show();

so.show();

fb->show();

fb=&so;

fb->show();

}