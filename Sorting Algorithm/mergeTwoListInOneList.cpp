#include<iostream>
using namespace std;

void MergeTwoList(int A[],int m,int B[],int n,int c[])
{
    
    int i = 0,j = 0,k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
            c[k++]= A[i++];
        else
            c[k++]= B[j++];
    }

    for(; i<m;i++)
        c[k++]=A[i];
    for(; j<n;j++)
        c[k++]=B[j];    

}
int main()
{
    int A[]={2,4,6,8};
    int B[]={3,5,7,10}; 
    
    int m = sizeof(A) / sizeof(A[0]); 
    int n = sizeof(B) / sizeof(B[0]); 
    int c[m+n];
    MergeTwoList(A,m,B,n,c);
    cout<<"Merging List"<<endl;
    for(int i=0; i<8; i++)
    {
        cout<<c[i];
        cout << endl;
    }


    return 0;
}