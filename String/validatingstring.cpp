#include<iostream>
using namespace std;

int valid(char *s)
{

  for (int i=0; s[i]!='\0';i++)
    {
         if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
         {
             return 0;
         }
        return 1;
    }


}
int main()
{
    char *s="sushma1@23";
    //cout<<"Enter String:";
    //cin>>s;
     if(valid(s))
     {
         cout<<"valid";
     }
     else
     {
         cout<<"invalid";
     }
     

    return 0;
}