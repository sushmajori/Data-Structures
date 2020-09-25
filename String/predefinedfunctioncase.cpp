#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[10];
    int i,j;
    cout<<"Enter String:";
    cin.get(s,10);
    for(i = 0; s[i] != '\0'; i++)
    {
        s[i]= toupper(s[i]);   
    }
           cout<<s<<endl;


     for(j=0; s[j]!='\0';j++)
        {
         s[j]= tolower(s[j]);
        }
       //cout<<i;
       cout<<s<<endl;


    return 0;
}