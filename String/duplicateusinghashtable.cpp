#include<iostream>
using namespace std;
int main()
{
    char s[10]="finding";
    int i;
    int H[26];
   // cout<<"Enter Strings:";
   // cin>>s;
        for (i=0; s[i]!='\0'; i++)
        {
            H[s[i]-97]+=1;
            
        }
            for(i=0;i<26;i++)
        {
            if(H[i]>1)
            {
                cout<<i+97;
                cout<<H[i];
            }
        }


return 0;
}