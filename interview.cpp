#include<bits/stdc++.h>
using namespace std;

bool check_in_all_substrs(char p,string s, int k){

    for(int i = 0; i <= s.length() - k; i++) {
        string r = s.substr(i, k) ;

         size_t found = r.find(p);
         if (found != string::npos){
             continue;
         }
         else{
            return false;
         }
   }
   return true;

}

int getSmallestKValue(string s){
    int k=1;
    string check = s.substr(0,k);
    while(k<s.length()){
        for(int j=0;j<s.length();j++){
        if(check_in_all_substrs(s[j],s,k)){
            return k;
        }
        else{
            continue;
        }
    }
    k++;
        
    }
    return -1;
    
}

 int main(){
    string s;
    cout<<getSmallestKvalue(s)<<endl;
    return 0;
 }