#include <iostream>
using namespace std;

class Student
{
    protected:
    int rollnumber;
    
    public:
    Student(int r)
    {
        rollnumber=r;
    }
    void show()
    {
        cout<<"The Roll Number Is: "<<rollnumber;
    }
};

class Marks : public Student
{
    protected:
    int m1, m2;
    
    public:
    
    Marks(int r, int b1, int b2):Student(r)
    {
        
        m1=b1;
        m2=b2;
    }
    void show()
    {
        Student::show();
        cout<<"\nMarks: "<<m1<<", "<<m2;
    }
};

class Result : public Marks
{
    
    public:
    
    Result(int r, int b1, int b2) : Marks( r, b1,  b2)
    {}
    
    void show()
    {
        Marks::show();
        cout<<"\nThe Results Are: "<<m1+m2;
    }
};

int main()
{
    Result r(12, 30, 40);
    r.show();
}