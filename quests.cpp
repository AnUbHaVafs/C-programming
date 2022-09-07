#include<bits/stdc++.h>
using namespace std;

void call_quests(int arr[],int sj, int tj, int n){
    int ans=0;
    if(sj<tj){
        for(int i=sj;i<tj;i++){
            if(arr[i]<=arr[i+1]){
                continue;
            }
            else{
                ans+=arr[i]-arr[i+1];
            }
        }
    }
    else{
        for(int i=sj;i>tj;i--){
            if(arr[i]<=arr[i-1]){
                continue;
            }
            else{
                ans+=arr[i]-arr[i-1];
            }

        }

    }
    cout<<ans<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(m--){
        int sj,tj;
        cin>>sj>>tj;
        sj= sj-1;
        tj = tj-1;
        call_quests(arr,sj,tj,n);
    }
    return 0;
}