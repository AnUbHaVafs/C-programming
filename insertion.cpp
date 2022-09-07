#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> t,vector<int> c){
	if(n==0){
		return 0;
	}
	if(n==1){
		return c[0];
	}
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		v.push_back({c[i],t[i]});

	}
	int ans=v[0].first;
	int p=0;
	int max_time = v[0].second;
	for(int i=1;i<n;i++){
		if((v[i].second == max_time) && (v[i].second == 0) ){
			ans+= v[i].first;

		}
		else if((v[i].second == max_time) && (v[i].second != 0)){
			// //////////////// yahan likho sir
			continue;
		}
		else if((v[i].second < max_time)){
			continue;
		}
		else{
			if(v[i].first <= v[p].first){
				ans = v[i].first; ///////////// ssir asie 
				p=i;
			}
		}
	}
	return ans;

}




int main(){
	int n;
	cin>>n;

	vector<int> t(n,0);
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	vector<int> c(n,0);
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	cout<<solve(n ,t,c);
}