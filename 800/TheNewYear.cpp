#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	for(int i=0;i<3;i++){
		int y;
		cin>>y;
		v.push_back(y);
	}
	sort(v.begin(),v.end());
	cout<< abs(v[0]-v[1])+abs(v[2]-v[1]);
	return 0;
}
