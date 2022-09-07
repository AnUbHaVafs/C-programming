#include <bits/stdc++.h> 
using namespace std; 
 
int func(int arr[], int s, int e) 
{
   if (s == e) 
	return 0; 
   if (arr[s] == 0) 
	return INT_MAX; 
 
int min = INT_MAX; 
for (int i = s + 1; i <= e && i <= s + arr[s]; i++) 
{ 
	int jumps = func(arr, i, e); 
	if(jumps != INT_MAX && jumps + 1 < min) 
		min = jumps + 1; 
} 
return min; 
}
 
int main() 
{ 
	int arr[] = {1,2,0,0,3,6}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << func(arr, 0, n-1); 
	return 0; 
}