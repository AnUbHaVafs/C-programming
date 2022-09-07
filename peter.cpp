
#include <bits/stdc++.h>
using namespace std;

int Rotate(int arr[], int d, int n )
{
    int ans =0 ;
	int p = 1;
	while (p <= d) {
		int last = arr[0];
		for (int i = 0; i < n - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = last;
		p++;
        for(int i=0;i<n;i++){
          if(i%2 != 0){
            ans = max(ans,arr[i]);

          }

        }
	}
    return ans;
}

// Driver code
int main()
{

    int N;
    cin>>N;
    int arr[N]={0};
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    int maxi =0;
	
    for(int i=0;i<N;i++){
        if(i%2==1){
            maxi = max(maxi,arr[i]);

        }

    }
    
	int Ans = Rotate(arr, d, N);
    
	cout<< max(Ans,maxi) <<endl;

	return 0;
}
