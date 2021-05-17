#include<bits/stdc++.h>
using namespace std;

// for building lps if pat[i] == pat[k] so just i+=1 and k+=1;
// if they are not equal so go to lps[j-1] when it stops check if pattern[j]==pattern[k] then only i=k+1 and j+=1
// else just do i=0 and lps[j] = 0 and j+=1;

int main(){
	string pattern = "abcaby";
	int lps[pattern.length()];
	memset(lps,0,sizeof(lps));
	
	int i=0;
	int j=1;
	
	//building lps array
	while(j<pattern.length()){
		if(pattern[i]==pattern[j]){
			lps[j] = i+1;
			i+=1;
		}
		else{
			int k = i;
			
			while(k > 0 && pattern[k] != pattern[j]){
				k = k-1;
				k = lps[k];
			}
			
			if(pattern[k]==pattern[j]){
				lps[j] = k+1;
				i = k+1;
			}
			else{
				lps[j] = 0;
				i = 0;
			}
		}
		
		j+=1;
	}
	
	//pattern finding code in text
	string s = "abxabcabcaby";
				//"abcabcy";
	int k=0;
	i=0;
	
	while(k<s.length()){
		
		if(pattern[i]==s[k]){
			i+=1;
		}
		else{
			int j = i;
			
			while(j>0 && pattern[j] != s[k]){
				j = j-1;
				j = lps[j]; 
			}
			
			if(pattern[j]==s[k]){
				i = j + 1;
			}
			else{
				i = 0;				
			}
		}
		k+=1;
		if(i==pattern.length()){
			cout<<"found at : "<<k-pattern.length()<<endl;
			cout<<(s.substr(k-pattern.length(),pattern.length()));
		}
	}
	
	return 0;
}
