#include <iostream>
using namespace std;

class Employee
{
    int salary, age;
    string name, employeeid;
    public:
    Employee()
    {
        name=" ";
        salary=0;
        age=0;
        employeeid=" ";
        
    }
    Employee(string n, int a, int s, string ed)
    {
        name=n;
        salary=s;
        age=a;
        employeeid=ed;
    }
    void display()
    {
        cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nSalary: "<<salary<<"\nEmployee Id: "<<employeeid;
    }
};

int main()
{
    int s1, s2, s3, s4, a1, a2, a3, a4;
    string n1, n2, n3, n4, ed1, ed2, ed3, ed4;
    cout<<"Enter Employee Name, Age, Salary, & Id, In Order, Make Sure To Add A Space In Between Each Of The Different Items: ";
    cin>>n1>>a1>>s1>>ed1;
    cout<<"Enter Employee Name, Age, Salary, & Id, In Order, Make Sure To Add A Space In Between Each Of The Different Items: ";
    cin>>n2>>a2>>s2>>ed2;
    cout<<"Enter Employee Name, Age, Salary, & Id, In Order, Make Sure To Add A Space In Between Each Of The Different Items: ";
    cin>>n3>>a3>>s3>>ed3;
    cout<<"Enter Employee Name, Age, Salary, & Id, In Order, Make Sure To Add A Space In Between Each Of The Different Items: ";
    cin>>n4>>a4>>s4>>ed4;
    Employee e1(n1, a1, s1, ed1), e2(n2, a2, s2, ed2), e3(n3, a3, s3, ed3), e4(n4, a4, s4, ed4);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
}

