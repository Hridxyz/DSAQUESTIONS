#include<iostream>
using namespace std;

int main()
{
    int a;
    int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    cout<<"enter size of note"<<endl;
    cin>>a;
    int b;
    switch (a)
    {
    case 100:
        
        b=amount/a;
        cout<<b<<endl;
        break;
    case 20:
        
        b=amount/a;
        cout<<b<<endl;
        break;
    case 1:
        
        b=amount/a;
        cout<<b<<endl;
        break;
    
    default:
    cout<<"Enter 1, 20 or 100"<<endl;
        break;
    }
    return 0;
}