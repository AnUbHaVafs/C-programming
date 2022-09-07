#include <iostream>
using namespace std;
int main()
{   
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=4;
    int temp[10];
 
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
 
    int j=0;
    for(int i=d;i<n;i++,j++)
    arr[j]=arr[i];
 
    int k=0;
    for(int i=n-d;i<n;i++,k++)
    arr[i]=temp[k];
 
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}