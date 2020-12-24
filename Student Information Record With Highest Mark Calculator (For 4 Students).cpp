#include <iostream>
using namespace std;


class Student
{
    private:
    int rollnumber, marks;
    string name;
    
    public:
    
    void member(string n, int r, int m)
    {
        name=n;
        rollnumber=r;
        marks=m;
    }
    
    void display();
};

void Student::display()
  {
      cout<<"\nName: "<<name<<"\nRoll Number: "<<rollnumber<<"\nMarks: "<<marks;
  }

int main()
{
    string a, b, c, d, e, f, z;
    int g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y;
    Student s1, s2, s3, s4;
    cout<<"Enter the name, roll number, & marks of student 1: ";
    cin>>a>>g>>h;
    s1.member(a,g,h);
    cout<<"Enter the name, roll number, & marks of student 2: ";
    cin>>b>>i>>j;
    s2.member(b,i,j);
    cout<<"Enter the name, roll number, & marks of student 3: ";
    cin>>c>>k>>l;
    s3.member(c,k,l);
    cout<<"Enter the name, roll number, & marks of student 4: ";
    cin>>d>>m>>n;
    s4.member(d,m,n);
    cout<<"\nINFORMATION OF STUDENTS: ";
    s1.display();
    cout<<"\n_______________";
    s2.display();
    cout<<"\n_______________";
    s3.display();
    cout<<"\n_______________";
    s4.display();
    cout<<"\n__________________________________________________________________________________________________________________________________________________________";
    
    cout<<"\nHIGHEST MARKS: ";
    if (h>j && h>l && h>n)
        s1.display();
    if (j>h && j>l && j>n)
         s2.display();
    if (l>j && l>h && l>n)
        s3.display();
    if (n>j && n>l && n>h)
        s4.display();
    return 0;
   
}
