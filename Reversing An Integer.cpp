#include <iostream>
using namespace std;

int main()
{
    int n,t,r,rev=0;
    cout<<"Enter Any Number: ";
    cin>>n;
    t=n;
    
    while (t>0)
    {
        r=t%10;
        t=t/10;
        rev=rev*10+r;
    }
    cout<<"Reverse Of Number "<<n<<" "<<"is"<<" "<<rev;
    
    return 0;
}