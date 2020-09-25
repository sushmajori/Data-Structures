#include<iostream>
using namespace std;
int main()
{
    char s[40]="sushama";
    char t;
    int i,j;
    for (i=0; s[i]!='\0';i++)
    {
    }
        i--;
        for(j=0; j<i;i--,j++){
            t= s[i];
            s[i]= s[j];
            s[j]=t;
        }
    
   // R[j]='\0';
    cout<<s;
    return 0;
}
