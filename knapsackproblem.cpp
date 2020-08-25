#include<bits/stdc++.h>
using namespace std;

bool sortf(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b ){
	int c= (a.second.first/a.second.second);
	int d= (b.second.first/b.second.second);
	return c>d;
}

int main(){
	int n;
	cin>>n;
	vector<pair<int,pair<int,int> > > v;
	
	for(int i=0;i<n;i++){
		int p,w;
		cin>>p>>w;
		pair<int,int> t;
		t.first=p;
		t.second=w;
		v.push_back(make_pair(i,t));
	}
	
	int weight;
	cin>>weight;
	
	int total=0;
	sort(v.begin(),v.end(),sortf);
	for(int i=0;i<n;i++){
		pair<int,pair<int,int> > t= v[i];
		pair<int,int> b = t.second;
		
		if(weight-b.second>=0){
			weight -= b.second;
			total += b.first; 
		}
		else if(weight==0){
			break;
		}
		else{
			total +=(b.first*weight)/b.second;
			weight -= weight;
		}
	}
	
	cout<<total;
	return 0;	
}
