#include<iostream>
using namespace std;
int main()
{
    char str[] = "sushama jori";
    int cnt=1;
  	for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] ==' ' || str[i]=='\n' ||str[i]=='\t' )
        {
            cnt++;
        }
    }
        cout<<cnt;

    return 0;
}
