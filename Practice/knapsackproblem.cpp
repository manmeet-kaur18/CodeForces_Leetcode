#include<bits/stdc++.h>
using namespace std;

// TIME COMPLEXITY
// The program has a time complexity of O(n*log(n))

// OUTPUT FOR PART A AND B

// (A) N =3, M = 20, (P1, P2, P3) = (25, 24, 15), (W1, W2, W3) = (18, 15, 10)
// (A) Total Profit = 31.5

// (B)N =7, M = 15 , (P1, P2, P3, P4, P5, P6, P7) = (10, 5, 15, 7, 6, 18, 3); (W1, W2,
// W3, W4, W5, W6, W7) = (2,3,5,7,1,4,1)
// (B) Total Profit = 55.3333

bool sortf(pair<int,pair<float,float> > a,pair<int,pair<float,float> > b ){
	float c= (a.second.first/a.second.second);
	float d= (b.second.first/b.second.second);
	return c>d;
}

int main(){
	int n;
	cin>>n;	
	float weight;
	cin>>weight;
	vector<pair<int,pair<float,float> > > v;
	
	for(int i=0;i<n;i++){
		int p,w;
		cin>>p>>w;
		pair<float,float> t;
		t.first=p;
		t.second=w;
		v.push_back(make_pair(i,t));
	}
	
	float total=0;
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
