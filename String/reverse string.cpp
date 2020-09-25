#include<iostream>
using namespace std;
int main()
{
    char s[40]="sushama";
    char R[40];
    int i,j;
    for (i=0; s[i]!='\0';i++)
    {
    }
        i--;
        for(j=0; i>=0;i--,j++){
            R[j]=s[i];
        
        }
    
    R[j]='\0';
    cout<<R;
    return 0;
}