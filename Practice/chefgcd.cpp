#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
        
    return gcd(b, a % b);
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    a = min(a,b);
	    b = max(a,b);
	    
	    int res = gcd(a,b);
	    
	    if(res > 1){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    int t1 = gcd(a+1,b);
	    int t2 = gcd(a,b+1);
	    
	    if(t1 > 1){
	        cout<<1<<endl;
	    }
	    else if(t2>1){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	   
	}
	return 0;
}

