#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long positive = 0, 
    negative = 0, 
    zero = 0; 
    long long step = 0; 
  
    for (long long i = 0; i < n; i++) { 
        if (a[i] == 0) { 
            zero++; 
        } 
        else if (a[i] < 0) { 
            negative++; 
            step = step + (-1 - a[i]); 
        } 
        else { 
            positive++; 
            step = step + (a[i] - 1); 
        } 
    } 
    if (negative % 2 == 0) { 
  
        step = step + zero; 
    } 
    else { 
  
        if (zero > 0) { 
  
            step = step + zero; 
        } 
  
        else { 
            step = step + 2; 
        } 
    } 
  
    cout<<step;
    return 0;
}
