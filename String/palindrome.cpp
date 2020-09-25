#include<iostream>
using namespace std;
int main()
{
    char originalString[40];
    char B[40];
    int i,j;
    cout << "Enter Strings:";
    cin >> originalString;
    for (i = 0; originalString[i] != '\0'; i++){}
    i--;
    for(j=0;i>=0; i--,j++)
        B[j] = originalString[i];
        
    B[j] = '\0';
    cout << B << endl;
    int k, count = 0;
    for (k = 0; originalString[k] != '\0'; k++){
        if (originalString[k] != B[k]){
            cout << "Not Palidrome" << endl;
            count++;
            break;    
        }
    }
    if (count == 0)
        cout << "Palindrome" << endl;
    return 0;
}