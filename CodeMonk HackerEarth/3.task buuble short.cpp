#include<bits/stdc++.h>
using namespace std;


void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int bubbleSort(int arra[],int n)
{
	int cnt;
	cnt=0;

    for(int i=0;i<n-1;i++)
    {
        bool swaap=false;

        for(int j=0;j<n-i-1;j++)
            if(arra[j]>arra[j+1])
           {
               swap(&arra[j],&arra[j+1]);
               swaap=true;
			   cnt++;
           }

           if(swaap==false)
            break;
    }
	return cnt;

}


int main()
{
   int n,arra[100000];
   cin>>n;

   for(int i=0;i<n;i++)
   {cin>>arra[i];
   }
   int a= bubbleSort(arra, n);
   cout<<a<<endl;

    return 0;
}

