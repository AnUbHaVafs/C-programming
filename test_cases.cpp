#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n]={0};
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    char a[n]={'0'};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    ///////////////// answer //////////////////
	    
	    int ans=INT_MAX;
	    for(int i=0;i<n;i++){
	        if(a[i]=='1'){
                continue;
	        }
            else{
                
                int  p =arr[i];
	            ans= min(ans,p);
            }
	    }
cout<<ans<<endl;
	}
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>s[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<s[i]<<endl;
//     }
//     return 0;
// }
