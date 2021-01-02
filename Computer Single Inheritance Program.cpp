#include <iostream>
using namespace std;

class Computer
{
    int speed,memory;
    public:
    Computer(int s,int m)
    {
        speed=s;
        memory=m;
    }
    void show()
    {
        cout<<"Speed: "<<speed<<endl<<"Memory: "<<memory<<endl;
    }
};

class Laptop:public Computer
{
    int battery,time1;
    public:
    Laptop(int s,int m,int b,int t):Computer(s,m)
    {
        battery=b;
        time1=t;
    }
    void show()
    {
        Computer::show();
        cout<<"Battery: "<<battery<<endl<<"Time:"<<time1<<endl;
    }
};

int main()
{
    Laptop L(45,100,25,0523);
    L.show();
}

