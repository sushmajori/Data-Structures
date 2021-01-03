#include<iostream>
using namespace std;
     
     void Insertionsort(int a[],int n)
     {
         for(int i=1; i<n; i++)
         {
            int j= i-1;
            int x= a[i];

            while (j>-1 && x<a[j])
            {
                a[j+1]= a[j];
                j--;
            }
             a[j+1]=x;
         }

     }


int main()
{
    int a[] = {10,12,8,9,2};
    int n=5;
    Insertionsort(a,n);

    cout<<"Sorted List"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}