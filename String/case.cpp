#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100];
    int i,cnt=0;
    cout<<"Enter String:";
    cin.get(s,100);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]= s[i]+32;
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        cnt++;
    }
       cout<<s<<endl;
       cout<<cnt<<endl;


    return 0;
}