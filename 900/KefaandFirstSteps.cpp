#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int A[n];
    int dp[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    dp[0] = 1;
    for(int i=1;i<n;i++){
        if(A[i]>=A[i-1]){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i] = 1;
        }
    }
    int max = 0;
    for(int i=0;i<n;i++){
        if(dp[i]>max){
            max=dp[i];
        }
    }
    cout<<max;
    return 0;
}
