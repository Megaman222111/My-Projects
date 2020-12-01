#include <iostream>
using namespace std;

int main()
{
    int n,p,r=1;
    cout<<"Enter Base Number: ";
    cin>>n;
    cout<<"Enter Exponent: ";
    cin>>p;
    
    for(int i=1;i<=p;i++)
        r=r*n;
    
    cout<<"The Answer: "<<r;
    
    return 0;
}

