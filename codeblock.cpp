#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans = INT_MIN;
    
    if(k>0){
        sort(arr,arr+n);
    }
    else{
        for(int i=1;i<n;i+=2){
           ans = max(ans,arr[i]);
        }
    }
    ans= max(ans,arr[n-1]);
    cout<<ans<<endl;


    return 0;
}