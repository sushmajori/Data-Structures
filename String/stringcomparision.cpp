#include<iostream>
using namespace std;
int main()
{
    char s[40];
    char B[40];
    cout<<"Enter Two Strings:\n";
    cin>>s>>B;
    int i,j;
        for(i=j=0;s[i]!='\0' && B[j]!='\0';i++,j++)
        {
          if(s[i]!=B[j])
            {
                //cout<<"Unequal";
                break;
            }
        }
          
            if(s[i]==B[j])
            {
                cout<<"equal";
            }
            
            
            else if(s[i]<B[j])
            {
                cout<<"Smaller";
            }
            else
            {
                cout<<"larger";
            }

        


return 0;
}