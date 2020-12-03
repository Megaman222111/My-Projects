#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"\nEnter Any Character: ";
    cin>>ch;
    cout<<"ASCII Equivalent Is: "<<static_cast<int>(ch);
    
    return 0;
}