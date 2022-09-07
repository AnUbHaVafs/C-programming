#include<bits/stdc++.h>
using namespace std;

int longest_seq(int n, int arr[]){
    if(n==0){
        return -1;
    }
    if(n==1){
        return 1;
    }
    int size=0;
    int ans = INT_MIN;
    stack<int> st;
    st.push(arr[0]);
    
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            st.push(arr[i]);
            
        }
        else{
            size = st.size();
            ans = max(ans,size);
            while(!st.empty()){
                st.pop();
            }

        }
    }
    int y = st.size();
    return max(ans+1,y);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int arr[n]= {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            continue;
        }
        else{
            arr[i] = arr[i]+arr[i-1];
        }
    }

    cout<<longest_seq(n,arr);
    return 0;
}
