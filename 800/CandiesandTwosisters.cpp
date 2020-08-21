#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	vector<int> v;
	for(int i=0;i<q;i++){
		int y;
		cin>>y;
		int possible = (y-1)/2;
		v.push_back(possible);
	}
	cout<<v[0];
	for(int i=1;i<v.size();i++){
		cout<<endl<<v[i];
	}
	return 0;
}
