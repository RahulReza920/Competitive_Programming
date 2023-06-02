#include<bits/stdc++.h>
using namespace std;

int main()
{


int n,t,i,m;

cin>>t;

while(t--)
{
    string s,s2;
    int d;
    cin>>s>>n>>m;
    d=m-n;

    s2=s.substr(n,d+1);
  sort(s2.begin(),s2.end());

  reverse(s2.begin(),s2.end());

  s.replace(n,d+1,s2);
    cout<<s<<endl;

}



    return 0;


}
