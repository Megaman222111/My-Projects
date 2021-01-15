#include <iostream>
using namespace std;

class A                     
{ 
    public: virtual ~A()
    { } 
    virtual void eat()
    {
        cout<<"EAT=>A";
        
    } 
    
}; 

class B: virtual public A   
{ 
    public: virtual ~B()
    { } 
    
    virtual void eat()
    { 
        cout<<"EAT=>B";
        
    } 
    
}; 
class C: virtual public A   
{ 
    public: virtual ~C()
    { } 
    virtual void eat()
    { 
        cout<<"EAT=>C";
        
    } 
    
}; 
class D: public B,C 
{ 
    public: virtual ~D()
    { } 
    virtual void eat()
    { 
        cout<<"EAT=>D";
        
    } 
    
}; 

int main(int argc, char ** argv)
{
    A *a = new D(); 
    a->eat(); 
    delete a;
}