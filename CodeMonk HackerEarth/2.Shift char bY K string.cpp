#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[]="hacker";
    char shiftedS[6];
    int k=2,n=6;


    for(int i=0;i<n;i++)
    {
        int idx=(i+k)%n;

        shiftedS[idx]=s[i];
    }
    shiftedS[n]='\0';

    for(int i=0;i<n;i++)
    {
        cout<<shiftedS[i];
    }

    return 0;
}
