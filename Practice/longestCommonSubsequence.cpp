#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int T[text1.length()+1][text2.length()+1];
        
    int n = text1.length();
    int m = text2.length();
        
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            T[i][j]= 0;
        }
    }
    for(int j=0;j<m+1;j++){
        T[0][j] = 0;
    }
    for(int i=0;i<n+1;i++){
        T[i][0] = 0;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(text1[i-1] == text2[j-1]){
                    T[i][j] = T[i-1][j-1] + 1;
            }
            else{
                T[i][j] = max(T[i][j-1],T[i-1][j]);
            }
        }    
    }
    return T[n][m];
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<longestCommonSubsequence(s1,s2);
	return 0;
}
