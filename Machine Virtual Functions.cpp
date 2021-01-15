#include <iostream>
using namespace std;

class Machine
{
    protected:
    int model_number;
    string colour, job;
    
    public:
    
    Machine(int mn, string cl, string jb)
    {
        model_number=mn;
        colour=cl;
        job=jb;
    }
    
    virtual void Working()
    {}
};

class Crane: public Machine
{
    public:
    Crane(int mm, string mc, string mj): Machine(mm,mc,mj)
    {}
    
    void Working()
    {
        cout<<"\nWhat This Does: "<<job<<endl<<"Model Number: "<<model_number<<endl<<"Colour: "<<colour;
    }
    
};

class Road_Roller: public Machine
{
    public:
    Road_Roller(int ab, string cd, string ef): Machine(ab,cd,ef)
    {}
    
    void Working()
    {
        cout<<"\nWhat This Does: "<<job<<endl<<"Model Number: "<<model_number<<endl<<"Colour: "<<colour;
    }
    
};

int main()
{
    Crane c(123,"Green","Picks Up Large Objects");
    Machine *m;
    m=&c;
    m->Working();
    Road_Roller r(415,"Blue","Flattens The Road");
    m=&r;
    m->Working();

}
