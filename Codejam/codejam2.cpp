#include<bits/stdc++.h>
using namespace std;
int X,Y;
int dp[1005][2];

int recur(int i,int prev,string s){
	
    if(i == s.length()){
        return dp[i][prev] = 0;
    }
    
    if(dp[i][prev] != -1 && prev != -1){
        return dp[i][prev];
    }
    
    if(s[i] == 'C' && prev == 0){
        return dp[i][prev] =  Y + recur(i+1,1,s);   
    }
    
    else if(s[i] == 'J' && prev == 1){
        return dp[i][prev] =  X + recur(i+1,0,s);
    }
    else if(s[i] !='?' && prev == -1){
        int x = s[i]=='J'?0:1;
        return dp[i][prev] =  recur(i+1,x,s);
    }
    
    
    if(prev == -1){
        return dp[i][prev] =  min(recur(i+1,0,s),recur(i+1,1,s));
    }
    else if(prev == 0){
        return dp[i][prev] =  min(Y+recur(i+1,1,s),recur(i+1,0,s));
    }
    return dp[i][prev] = min(X+recur(i+1,0,s),recur(i+1,1,s));
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        memset(dp,-1,sizeof(dp));
        int x,y;
        cin>>x>>y;
        X=x;
        Y=y;
        string s;
        cin>>s;
        cout<<recur(0,-1,s)<<endl;
        t-=1;
    }
    return 0;
}
