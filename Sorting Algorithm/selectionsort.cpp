#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b= temp;
}

void selectionsort(int arr[],int n)
{
    int i,j,k;
    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n;j++)
        {
            if(arr[j]< arr[k])
            k=j;

        }
        swap(&arr[i],&arr[k]);

    }
}
int main()
{
    int arr[]={10,13,3,4,5};
    int n= 5;
    selectionsort(arr,n);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}