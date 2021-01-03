#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int temp;
    int n;
    cout<<"How many Elements you want to sort :";
    cin>>n;

    cout<<"\nEnter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  

    //Bubble sort 
    for(int i=0; i<n-1;i++)
    {
        for(int j=0; j<n-1-i;j++)
        {
            //comparing Elements
            if(arr[j]>arr[j+1])
            {
            //temp= arr[j];
            swap(arr[j],arr[j+1]); //Swap function
            //arr[j+1]=temp;
            }
        }
    }
    //Displaying Elements
    cout<<"\nArray Elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}
