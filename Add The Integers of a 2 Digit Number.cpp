#include <iostream>
using namespace std;

int main()
{
    int n,d,a,e,c;
    cout<<"Enter Any 2 Digit Number: ";
    cin>>n;
    d=n%10;
    e=n-d;
    c=e/10;
    a=c+d;
    cout<<"The 2 Digits In The Number Added are: "<<a;
}
