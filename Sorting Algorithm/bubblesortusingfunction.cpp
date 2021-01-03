#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int flag=0;
    for(int i=0; i<n-1;i++)
    {
        flag=0;
        for(int j=0; j<n-1-i;j++)
        {   int temp;

            if(arr[j]>arr[j+1])
            {
            temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
            }
            
        }
        if(flag==0)
            cout<<"List Alredy sorted";
            break;
    }
}

int main()
{
int arr[]={1,2,3,4,5};
bubblesort(arr,5);
 
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<endl;
}
 

return 0;
}