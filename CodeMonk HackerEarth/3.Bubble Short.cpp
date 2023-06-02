#include<bits/stdc++.h>
using namespace std;


void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int arra[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        bool swaap=false;
        for(int j=0;j<n-i-1;j++)
            if(arra[j]>arra[j+1])
           {
               swap(&arra[j],&arra[j+1]);
               swaap=true;
           }

           if(swaap==false)
            break;
    }

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
