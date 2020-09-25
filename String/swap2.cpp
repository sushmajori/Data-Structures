#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 numbers:"<<endl;
    cin>>a>>b;

    a= a+b; 
    b=a-b;
    a=a-b;
    cout<<"value of a:"<<a<<"value of b:"<<b;

    return 0;
}