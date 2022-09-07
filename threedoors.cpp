#include<bits/stdc++.h>
using namespace std;

void three_doors(int x, int arr[]){
   
    int k = arr[x-1];
    if(k==0){
        
        // return 0;
        cout<<"NO"<<endl;
        return;
    }
    int count =1;
    while(count!=3){
        k = arr[k-1];
        count++;
        if(k==0 && count != 3){
            cout<<"NO"<<endl;
        return;
        }
    }
    if(count==3){
        cout<<"Yes"<<endl;
        return;
        
    }
}




int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
         int arr[3] = {0};
         arr[0]=a;
         arr[1]=b;
         arr[2]=c;
        three_doors(x,arr);
        // int ans = three_doors(x,a,b,c);
        // if(ans==0){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
    }
    return 0;
}