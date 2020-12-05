#include <iostream>
using namespace std;

int inline add(int a, int b)
{
    return (a+b);
}

int inline subtract(int a, int b)
{
    return (a-b);
}

int inline divide(int a, int b)
{
    return (a/b);
}

int inline multiply(int a, int b)
{
    return (a*b);
}

int main()
{
   int q,n,p,a,b,c,d,e,f;
    cout<<"\n1: Multiplication \n2: Division \n3: Addition \n4:Subtraction";
    cout<<"\nEnter the number according to what you need: ";
    cin>>q;
    
    if (q==1)
    {
        cout<<"\nPrint the first number: ";
        cin>>n;
        cout<<"\nPrint the second number: ";
        cin>>p;
        cout<<"\nAwswer: "<<multiply(n,p);
    }
    if (q==2)
    {    
        cout<<"\nPrint the first number: ";
        cin>>a;
        cout<<"\nPrint the second number: ";
        cin>>b;
        cout<<"\nAwswer: "<<divide(a,b);
    }
    if (q==3)
    { 
        cout<<"\nPrint the first number: ";
        cin>>c;
        cout<<"\nPrint the second number: ";
        cin>>d;
        cout<<"\nAwswer: "<<add(c,d);
    }
    if (q==4)
    {
        cout<<"\nPrint the first number: ";
        cin>>e;
        cout<<"\nPrint the second number: ";
        cin>>f;
        cout<<"\nAwswer: "<<subtract(e,f);
    }
    if (q>4)
    {
        cout<<"\nInvalid Option! Rerun Program!";
        return 0;
    }
    return 0;
    
}

