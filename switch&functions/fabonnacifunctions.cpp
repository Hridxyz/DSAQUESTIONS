#include<iostream>
using namespace std;

int fibonacci(int n){
        int a=0, b=1;
    for(int i=1; i<=n; i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    
}

int main()
{
    int num;
    cin>>num;
    cout<<"0 1 ";
    fibonacci(num);
    return 0;
}