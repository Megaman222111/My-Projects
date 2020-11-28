# include <iostream>
using namespace std;

int main()
{
    float F,C;
    cout<<"\n Enter temperature in Fahrenheit: ";
    cin>>F;
    C=5*(F-32)/9;
    cout<<"Temperature in celcius is: "<<C;
    return 0;
}