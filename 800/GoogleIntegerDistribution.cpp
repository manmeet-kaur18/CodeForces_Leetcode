#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		v.push_back(y);
	}
	map<pair<int,int>, int> m;
	for(int i = 0;i<n;i++){
		for(int j=i+1;j<n;j++){
			pair<int,int> p = make_pair(v[i],v[j]);
			m[p]=v[i]^v[j];
		}
	}
	
	map<pair<int,int> , int>::iterator itr;
	map<pair<int,int> , int>::iterator itr1;
	
	vector<int> v1;
	map<int,int> m1;
	
	for(itr=m.begin();itr!=m.end();itr++){
		int sum=itr->second;
		m1.clear();
		m1[itr->first.first] =1;
		m1[itr->first.second]=1;
		
		for(itr1=m.begin();itr1!=m.end();itr1++){	
			if(m1.find(itr1->first.first)==m1.end() && m1.find(itr1->first.second)==m1.end()){
				m1[itr1->first.first] =1;
				m1[itr1->first.second]=1;
				sum+= itr1->second;
			}
		}
		v1.push_back(sum);
	}
	sort(v1.begin(),v1.end());
	cout<<v1[0]<<" "<<v1[v1.size()-1]<<endl;
	return 0;
}
