#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	string s2;
	string s3;
	cin>>s1>>s2>>s3;
	map<char,int> m;
	for(int i=0;i< s3.length();i++){
		if(m.find(s3[i])==m.end()){
			m[s3[i]]=1;
		}
		else{
			m[s3[i]]+=1;
		}
	}
	for(int i=0;i<s2.length();i++){
		if(m.find(s2[i])==m.end()){
			cout<<"NO";
			return 0;
		}
		else{
			m[s2[i]]-=1;
			if(m[s2[i]]==0){
				m.erase(s2[i]);
			}
		}
	}
	for(int i=0;i<s1.length();i++){
		if(m.find(s1[i])==m.end()){
			cout<<"NO";
			return 0;
		}
		else{
			m[s1[i]]-=1;
			if(m[s1[i]]==0){
				m.erase(s1[i]);
			}
		}
	}
	
	map<char,int>::iterator itr;

	if(m.size()==0){
		cout<<"YES";
	}	
	else{
		cout<<"NO";
	}
	return 0;
}
