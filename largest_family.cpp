#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#include <sys/resource.h>
#define int long long
#define double long double
#define initrand mt19937 mt_rand(time(0));
#define rand mt_rand()
#define MOD 1000000007
#define INF 1000000000
#define mid(l, u) ((l+u)/2)
#define rchild(i) (i*2 + 2)
#define lchild(i) (i*2 + 1)
#define mp(a, b) make_pair(a, b)
#define lz lazup(l, u, i);
#define ordered_set tree<pair<int, int>, null_type,less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        priority_queue<int> pq;
        int sum = 0;
        for(int i = 0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
            sum += a[i];
        }
        int ans = n;
        while(sum >= n){
            ans--;
            sum -= pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
}