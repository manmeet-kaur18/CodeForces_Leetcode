#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
		long long int t = pow(2,n)-1;
        int i = 0;
        
        long long int sum = 0;
        
        while(k--){
        	long long int x = t^i;
        	i+=1;
        	t-=1;
        	sum = sum + 2*x;
		}
		
		cout<<sum<<endl;
    }
	return 0;
}

