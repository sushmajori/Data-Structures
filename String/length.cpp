#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[50];
    int i;
    int cnt=0,c=1,cntchar=1;
    cout<<"Enter String:";
    cin.get(s,50);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            cnt++;
        }
        // count the wotds 
       else if(s[i] ==' ' && s[i-1]!=' ')
        {
            c++;
        }

        //count total character in a sentence
        else if(s[i] ==' ' || s[i]=='\n' || s[i]=='\t')
        {
            cntchar++;
        }
        

    }
       cout<<"Total Vowels:"<<cnt<<endl;
       cout<<"Total Words:"<<c<<endl;
       cout<<"Total chracter in sentences: "<<i<<endl;


    return 0;
}