#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	vector<int> arr;

	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		arr.push_back(z);
	}
	
	sort(arr.begin(),arr.end());
	int y;
	cin>>y;
	for(int i=0;i<y;i++){
		int a;
		cin>>a;
		std::vector<int>::iterator upper1, upper2; 
    	upper1 = std::upper_bound(arr.begin(), arr.end(), a);
		v.push_back((upper1 - arr.begin()));
	}
	
	for(int i=0;i<y;i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
