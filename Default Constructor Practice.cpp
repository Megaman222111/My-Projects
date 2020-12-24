
#include <iostream>
using namespace std;

class Namer
{
    private:
    string aname, bname, cname;
    string a,b,c;
    public:
   
    Namer() 
    {
        bname="You have to give a name";
        aname=" ";
        cname=" ";
    }

    Namer(string a, string b) 
    {
        aname=a;
        bname=b;
        cname=" ";
        cout<<a<<" "<<b;
    } 
    Namer(string a, string b, string c) 
    {
        aname=a;
        bname=b;
        cname=c;
        cout<<a<<" "<<b<<" "<<c;
    }
    void display()
    {
        cout<<"The name is: "<<aname<<" "<<bname<<" "<<cname<<endl;
    }

};

int main() 
{
    string d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;

    cout << "Enter Full Name: ";
    cin>>d>>e>>f;
    Namer name1, name2(d,e), name3(d,e,f);
    cout<<"\nNo Argument Constructor: \n";
    name1.display();
    cout<<"\n2 Argument Constructor: \n";
    name2.display();
    cout<<"\n3 Argument Constructor: \n";
    name3.display();

    return 0;
}