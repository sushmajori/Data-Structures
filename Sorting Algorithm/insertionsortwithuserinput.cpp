#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[5];
    cout<<"Enter Size of n";
    cin>>n;
    cout<<"Enter Elemnts in array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<n; i++)
    {
        int j= i-1;
         int x= a[i];
        while(j>-1 && x<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    cout<<"Sorted Array Elements"<<endl;
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}