#include <iostream>
using namespace std;
struct Pair
{
    int max;
    int min;
};
struct Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;
    int i;
    if ( n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    if(arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }
    for(i=2;i<n;i++)
    {
        if (arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }
        else{
            minmax.min=arr[i];
        }
    }
    return minmax;
}

int main()
{
    int arr[]={1000,11,12,4213,23123};
    int arr_size=5;
    struct Pair minmax=getMinMax(arr,arr_size);
    cout<<"Minimum element is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max;
    return 0;

}