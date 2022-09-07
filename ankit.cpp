#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n++;
    int i=1;
    while(i!=n){
        int j=1;
        int k=i;
        while(j!=i+1){

            cout<<k<<" ";
            k++;
            j++;
            
        }
        cout<<endl;
        i++;
    }
    return 0;
}