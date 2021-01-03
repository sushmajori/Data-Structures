#include<iostream>
using namespace std;
void mergetwolist(int A[],int l,int mid,int h)
{
    int i=l, j=mid+1,k=l;
    int B[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++]= A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    for(; i<=mid; i++)
    B[k++]= A[i];
    for(; j<=h;j++)
    B[k++]= A[j];    

    for(i=l;i<=h;i++)
    A[i]= B[i];
}

int main()
{
    int A[]= {2,5,8,12,3,6,7,10,15};
    mergetwolist(A,0,4,8);
    for(int i=0; i<9; i++)
    {
        cout<<A[i]<<endl;;
    }

    return 0;

}