#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long number=0;
	vector<int> b;
	b.push_back(1);
	for(long i=1;i<n;i++){
		b.push_back(0);
	}
	long long base = 1;
	for(long long i=b.size()-1;i>=0;i--){
		number += b[i]*base;
		base = base*2;
	}
	long long prev = number;
	for(long long i=0;i<n-1;i++){
//		cout<<number<<" "<<prev;
		prev=prev>>1;
		number=number^prev;
		prev=number;
	}
	
	vector<int> v;
	while(number>0){
		v.push_back(number%2);
		number = number/2;
	}
	base=1;
	number=0;
	for(long long i=0;i<v.size();i++){
		number+=v[i]*base;
		base=base*2;
	}
	cout<<number%1000000007;
	return 0;
	
}
