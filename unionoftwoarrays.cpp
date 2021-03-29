
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0,c=0;
    int f[100];
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            {f[c]=arr1[i++];
            c++;
            }
        else if (arr2[j] < arr1[i])
            {f[c]=arr2[j++];
            c++;
            }
        else {
            
            f[c]=arr2[j++];
            c++;
        }
    }
  
    /* Print remaining elements of the larger array */
    while (i < m)
        f[c]=arr1[i++];
        c++;
    while (j < n)
        f[c]=arr2[j++];
        c++;
    i=0;
    while(i<c)
    {
        cout<<f[i];
    i++;
    }
}
  
/* Driver program to test above function */
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, m, n);

    return 0;
}