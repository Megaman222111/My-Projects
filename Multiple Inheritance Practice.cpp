#include <iostream>
using namespace std;

class Student
{
    protected:
    int m1, m2;
    
    public:
    Student(int marks1, int marks2)
    {
        m1=marks1;
        m2=marks2;
    }
};

class Sports : public Student
{
    protected:
    int S_marks;
    
    public:
    Sports(int b1, int b2, int sm) : Student(b1, b2)
    {
        S_marks=sm;
    }
};

class FinalResult : public Sports
{
    
    private:
    int totalmarks; 
    int a;
    public:
    FinalResult(int a1, int a2, int a3) : Sports(a1, a2, a3) 
    {}
    
    int Tot_marks(int c1, int c2, int c3)
    {
        totalmarks=c1+c2+c3;
    }
    
    void show()
    {
        a=Tot_marks(m1,m2,S_marks);
        cout<<"The total marks are: "<<totalmarks;
    }
};

int main()
{
    FinalResult f1(40,50,60);
    f1.show();
}