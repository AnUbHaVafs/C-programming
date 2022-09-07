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
	    if(n==0){
	        cout<<"1"<<endl;
	        break;
	    }
	    string s;
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    string r;
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	    }
	    int ans=0;
	    for(int i=0;i<n;i++){
	        // if(s[i]!=r[i]){
	        //     ans++;
	        // }
		    ans+= s[i]^r[i];
	    }
	    
	    if((ans%2) ==0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
