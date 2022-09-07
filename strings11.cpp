#include<bits/stdc++.h>
using namespace std;

bool divCheck(int n)
    {
        if(n % 2 == 0 || n % 3 == 0)
        {
          return true;
        }
        return false;
    }

int main(){
    int a[] = {6,7,17,3,2,9,1,5};
        for (int i = 0; i < 8; i++)
        {
            if(divCheck(a[i]))
            {
                int temp = a[0];
                a[0] = a[i];
                a[i] = temp;
            }
        }
        for (int t = 0; t < 8; t++)
        {
            cout<<((a[t]) + " ");
        }
    return 0;
}