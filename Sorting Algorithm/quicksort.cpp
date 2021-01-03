#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp= *a;
    *a=*b;
    *b= temp;
}
int partition(int a[],int l, int h)
{
    int pivot = a[l];
    int i= l,j=h;
        do
        {
            do
            {
                i++;
            }
                while(a[i]<=pivot);
                
            do
            {
                j--;
            }
                while (a[j]>pivot);
                if(i<j)
                swap(&a[i],&a[j]);

        }while(i<j);
        swap(&a[l],&a[j]);
     return j;
}

    void quicksort(int a[],int l,int h)
    {
        int j;

        if(l<h)
        {
            j= partition(a,l,h);
            quicksort(a,l,j);
            quicksort(a,j+1,h);
        }

    }
int main()
{
    int a[] ={50,60,70,40,90,10,20,30,INT32_MAX};

    quicksort(a,0,8);
    cout<<"Sorted Element:"<<endl;
    for(int i=0; i<8;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}