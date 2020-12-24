#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int a = rows; a >= 1; --a)
    {
        for(int b = 1; b <= a; ++b)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    
    return 0;
}
