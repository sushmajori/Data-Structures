#include<iostream>
using namespace std;
int main()
{
    char s[40];
    int i,j,count=0;
    cout<<"Enter Strings:";
    cin>>s;
        for (i=0; s[i]!='\0'; i++)
        {
            for(j=i+1; s[j]!='\0';j++)
            {
                if(s[i]==s[j])
                {
                    //cout<<s[i]<<":";

                    count++;
                    cout<<s[i]<<":";
                }
               
            }
        }

        cout<<count<<endl;

return 0;
}