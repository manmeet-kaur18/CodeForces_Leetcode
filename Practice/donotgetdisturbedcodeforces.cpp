#include<bits/stdc++.h>
using namespace std;

void solve(string str){
	map<char,int> m;
	int n=str.length(); 
	int flag = 0;
	
	for(int i=0;i<n;i++){
		if(m.find(str[i])!=m.end()){
			if(abs(m[str[i]]-i) > 1)
			{
				flag = 1;
				break;
			}
			else{
				m[str[i]]=i;
			}
		}
		else{
			m[str[i]] = i;
		}
	}
	
	if(flag){
		cout<<"NO \n";
	}
	else{
		cout<<"YES \n";
	}
	
}

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		string str;
		int n;
		cin>>n>>str;	
		solve(str);
	}
	
	return 0;
}
