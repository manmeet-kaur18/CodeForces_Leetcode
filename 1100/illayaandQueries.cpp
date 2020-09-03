#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int m;
	cin>> s>>m;
	int n=s.length();
	int a[n];
	for(int i=1;i<n;i++){
		if(s[i-1]==s[i]){
			a[i+1] = a[i]+1;
		}
		else{
			a[i+1]=a[i];
		}
	}
	
	while(m--){
		int l;
		int r;
		cin>>l>>r;
		cout<< a[r]-a[l]<<endl;
	}
	return 0;
}
