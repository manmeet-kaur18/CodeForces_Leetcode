#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		if((a-x + b-y) < n){
			cout<<x*y<<endl;
			continue;
		}
		long long t1;
		long long t2;
		
		long long steps = (a-x);
		if( steps >= n){
			t1 = (a-n)*b;
		}
		else{
			t1= (a-steps)*(b-(n-steps));
		}
		
	    steps = (b-y);
		if( steps >= n){
			t2 = (b-n)*a;
		}
		else{
			t2 = (b-steps)*(a-(n-steps));
		}
		cout<<min(t1,t2)<<endl;
	}
	return 0;
}
