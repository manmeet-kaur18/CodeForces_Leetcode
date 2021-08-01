#include<bits/stdc++.h>
using namespace std;

int solve(string str,int idx,map<string,int> s){

    if (str[idx] == '\0'){  
        return 0;
    }
    
    int ans = INT_MAX;
    
    string temp = "";
    
    for (int i=idx; str[i]!='\0' ; i++)
    {
        temp += str[i];
        
        if(s.find(temp) != s.end()){
            int res = solve(temp,i+1,s);
            if(res != -1){
                ans = min(ans,1+res);
            }
        }
    }
 
    if(ans == INT_MAX){
        return -1;
    }
    
    return ans;
}

int min_bars(string s, string words[], int n){
    
    map<string,int> st;
    
    for(int i=0;i<n;i++){
        st[words[i]] +=1 ;
    }
    
    int res = solve(s,0,st);
    return res == -1 ? -1 : res-1;
}

int main(){
	string str="helloworld";
	string words[] = {"world","hi","hello","helloworld","batman"};
	cout<<min_bars(str,words,5);
	return 0;
}
