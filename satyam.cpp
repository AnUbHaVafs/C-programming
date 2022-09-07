#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int i=0;
    int j=1;
    int k=n-1;
    int ans=0;
    while(j!=k){
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]); 
            ans++;
            i++;
            j++; 

        }
        else if(arr[j]>arr[k]){
            swap(arr[j],arr[k]);
            ans++;


        }
        else{
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}