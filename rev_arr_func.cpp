 #include <bits/stdc++.h> 
using namespace std; 
 
void func1(int arr[], int n) 
{ 
	int k = arr[0], i; 
	for (i = 0; i < n - 1; i++) {
        if(i==3){
            continue;
        }
        
        arr[i] = arr[i + 1]; 

    }
		
 
	arr[i] = k; 
} 
 
void func(int arr[], int d, int n) 
{ 
	for (int i = 0; i < d; i++) 
		func1(arr, n); 
} 
 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 
 
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
 
 
	func(arr, 3, n); 
	printArray(arr, n); 
 
return 0;
}