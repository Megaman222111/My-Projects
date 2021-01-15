#include<iostream>
using namespace std;
class Megh;
class Mistry
{
    private:
    int m1;
    friend void fun(Mistry,Megh);
    public:
    Mistry()
    {
        m1=17;
    }
    
};
class Megh
{
    private:
    int m2;
    friend void fun(Mistry,Megh);
    public:
    Megh()
    {
        m2=5;
    }
    
};
void fun(Mistry a,Megh b)
{
    cout<<a.m1+b.m2;
}

int main()
{
    Mistry a1;
    Megh b2;
    fun(a1,b2);

}


