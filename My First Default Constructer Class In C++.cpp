#include <iostream> 
using namespace std;
class Student
{
    int roll;
    string name;
    public:
    Student()
    {
        roll=0;
        name=" ";
    }
    Student(string n,int r)
    {
        roll=r;
        name=n;
    }
    void display()
    {
        cout<<"Name: "<<name<<" Roll: "<<roll<<endl;
    }
};

int main()
{
    int r1, r2, r3, r4;
    string n1, n2, n3, n4;
    cout<<"Enter student name than roll number: ";
    cin>>n1>>r1;
    cout<<"Enter student name than roll number: ";
    cin>>n2>>r2;
    cout<<"Enter student name than roll number: ";
    cin>>n3>>r3;
    cout<<"Enter student name than roll number: ";
    cin>>n4>>r4;
    Student s1(n1, r1), s2(n2, r2), s3(n3, r3), s4(n4, r4);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
}
