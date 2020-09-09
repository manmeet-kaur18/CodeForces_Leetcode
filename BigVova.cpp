#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int y;
			cin>>y;
			v.push_back(y);
		}
		vector<int> c;
		
		int max_ele = *max_element(v.begin(), v.end());
		int index = std::max_element(v.begin(),v.end()) - v.begin();
		v.erase(v.begin()+index);
		c.push_back(max_ele);
		
		while(v.size()>0){
			
			int maxgcd = 0;
			int ele = 0;
			for(int i=0;i<v.size();i++){
				int gcdele = gcd(max_ele,v[i]);
				if(gcdele > maxgcd){
					maxgcd = gcdele;
					ele = v[i];
					index = i;
				}
			}
			max_ele = maxgcd;
			
			c.push_back(v[index]);
			v.erase(v.begin()+index);
		}
		
		for(int i=0;i<c.size();i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
