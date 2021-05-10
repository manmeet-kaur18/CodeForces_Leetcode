#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string B){
    string a = B;
    cout<<B<<" ";
    std::reverse(a.begin(), a.end());
	cout<<a<<endl; 
    if(a==B){
        return true;
    }
    return false;
}

int minCut(string A) {
    int dp[A.length()][A.length()];
    for(int i=0;i<A.length();i++){
    	for(int j=0;j<A.length();j++){
    		dp[i][j]=0;
		}
	}
    for(int i=0;i<A.length();i++){
        for(int j=i;j<A.length();j++){
            if(isPalindrome(A.substr(i,j+1))){
                dp[i][j]=0;
            }
            else{
                int minval = INT_MAX;
                for(int k=i;k<j;k++){
                    minval = min(minval,(dp[i][k]+dp[k+1][j]));
                }
                dp[i][j] = 1+minval;
            }
        }
    }
     for(int i=0;i<A.length();i++){
         for(int j=0;j<A.length();j++){
             cout<<dp[i][j]<<" ";
         }
         cout<<endl;
     }
    return dp[0][A.length()-1];
}

int main(){
	cout<<minCut("ababb");
	return 0;
}
