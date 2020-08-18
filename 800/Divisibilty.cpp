#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	vector<int> v;
	while(q--){
		int a;
		int b;
		cin>>a>>b;
		if(a%b == 0){
			v.push_back(0);
		}
		else if(a<b){
			v.push_back(b-a);
		}
		else{
			v.push_back(b-(a%b));
		}
		
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
