#include <iostream>
using namespace std;

class Students
{
    private:
    long rollnumber;
    string name, remarks;
    int score;
    
    void AssignRem()
    {
        if (score >= 50)
            remarks="Selected";
        if (score < 50)
            remarks="Not Selected";
    }
    
    public:
    
    void Enter(string n, long r, int s)
    {
        name=n;
        rollnumber=r;
        score=s;
        AssignRem();
    }
    
    void Display()
    {
        cout<<"\nName: "<<name<<"\nRoll Number: "<<rollnumber<<"\nScore: "<<score<<"\nRemarks: "<<remarks;
    }
    
    void ReturnScore()
    {
        cout<<"\nName: "<<name<<"\nScore: "<<score;
    }
    
};

int main()
{
    string a,b,c, d, j, k, l, m, n, o, p;
    long e,f,g,h, i;
    float q,r,s,t,u,v,w,x,y,z;
    Students s1, s2, s3, s4;
    cout<<"\nEnter the name, rollnumber, and score of the student: ";
    cin>>a>>e>>q;
    s1.Enter(a,e,q);
    cout<<"\nEnter the name, rollnumber, and score of the student: ";
    cin>>b>>f>>r;
    s2.Enter(b,f,r);
    cout<<"\nEnter the name, rollnumber, and score of the student: ";
    cin>>c>>g>>s;
    s3.Enter(c,g,s);
    cout<<"\nEnter the name, rollnumber, and score of the student: ";
    cin>>d>>h>>t;
    s4.Enter(d,h,t);
   cout<<"\n___________________________________________________________________________________________________";
    cout<<"\nREMARKS: ";
    s1.Display();
    cout<<"\n______________________________";
    s2.Display();
    cout<<"\n______________________________";
    s3.Display();
    cout<<"\n______________________________";
    s4.Display();
    cout<<"\n_________________________________________________________________________________________________";
    cout<<"\nSCORES: ";
    s1.ReturnScore();
    cout<<"\n______________________________";
    s2.ReturnScore();
    cout<<"\n______________________________";
    s3.ReturnScore();
    cout<<"\n______________________________";
    s4.ReturnScore();
    cout<<"\n______________________________";
}