#include <iostream>
using namespace std;

int main()
{
    int money, $100, $50, $20, $10, $5, $2, $1;
    
    cout<<"Enter amount of money: ";
    cin>>money;
    
    $100=money/100;
    money=money%100;
    
    $50=money/50;
    money=money%50;
    
    $20=money/20;
    money=money%20;
    
    $10=money/10;
    money=money%10;
    
    $5=money/5;
    money=money%5;
    
    $2=money/2;
    money=money%2;
    
    $1=money/1;
    money=money%1;
    
    if (money == 0)
        money=0;

    cout<<"$100 Notes: "<<$100<<"\n$50 Notes: "<<$50<<"\n$20 Notes: "<<$20<<"\n$10 Notes: "<<$10<<"\n$5 Notes: "<<$5<<"\n$2 Coins: "<<$2<<"\n$1 Coins: "<<$1<<"\nCents Left After Soring: "<<money<<"\nCents can not be split up into cent coins (ex.25 cent coin) in this engine."<<"\nThanks For Using This Program Made By Megh Mistry!";
    
    return 0;
}