#include <iostream>
using namespace std;

int main()
{
    int p,r,t,i;
    cout<<"Enter Principle: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter Time: ";
    cin>>t;
    i=(p*r*t)/100;
    cout<<"Simple Interest Is: "<<i;
    return 0;
}