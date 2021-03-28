#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n)
{
    int j=0,temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=0)
            {   
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
    }

}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)   
        cout<<arr[i]<<"," ;
}
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}