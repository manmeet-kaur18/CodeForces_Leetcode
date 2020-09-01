#include<bits/stdc++.h>
#include<climits>
using namespace std;

bool sortf(pair<char,pair<int,int> > a,pair<char,pair<int,int> > b){
	return a.second.second < b.second.second;
}

int main(){
	vector<pair<char,pair<int,int> > > v;
	int n;
	cin>>n;
	int max = 0;
	int min = INT_MAX;
	for(int i=0;i<n;i++){
		char c;
		int x;
		int y;
		cin>>c>>x>>y;
		if(y > max){
			max=y;
		}
		if(x<min){
			min = x;
		}
		pair<int,int> t= make_pair(x,y);
		v.push_back(make_pair(c,t));
	}
	
	sort(v.begin(),v.end(),sortf);
	
	int prevf = min;
	vector<char> activity;
	
	for(int i=0;i<n;i++){
		pair<char, pair<int,int> > b= v[i];
		pair<int,int> t = b.second;
		
		cout<<prevf<<" ";
		cout<<b.first<<" ";
		cout<<t.first<<" "<<t.second<<endl;
		if(t.first>prevf){
			prevf = t.second;
			activity.push_back(b.first);
		}
	}
	
	for(int i=0;i<activity.size();i++){
		cout<<activity[i]<<endl;
	}
	return 0;
}
