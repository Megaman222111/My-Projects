#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3, max1;
    cout<<"Enter the three numbers: ";
    cin>>num1>>num2>>num3;

    if (num1>num2 && num1>num3)
    max1=num1;
    else if (num2>num1 && num1>num3)
    max1=num1;
    else max1=num3;

    cout<<max1;
