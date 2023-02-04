#include<iostream>
using namespace std;

int ap(int n){
    int ans=3*n+7;
    return ans;
}

int main()
{
    int num;
    cin>>num;
    cout<<ap(num);
    return 0;
}