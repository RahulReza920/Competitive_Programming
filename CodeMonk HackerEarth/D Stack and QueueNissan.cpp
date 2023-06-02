#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,n,arra[1000];
    int sum=0;

    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    sort(arra,arra+n);


    for(int i=n-1;i>=k;i--)
    {
        sum+=arra[i];
    }

    cout<<sum<<endl;

    return 0;
}
