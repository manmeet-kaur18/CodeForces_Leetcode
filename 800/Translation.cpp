#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	int flag=0;
	if(s.length()!=t.length()){
		cout<<"NO";
		return 0;
	}
	else{
		int i=0;
		int j=s.length()-1;
		while(i<s.length()){
			if(s[j] != t[i]){
				flag =1;
				break;
			}
			i++;
			j--;
		}
	}
	if(flag == 0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
