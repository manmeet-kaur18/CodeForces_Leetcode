#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	int f[n + 2];  
    int i; 
  	if(n==0){
  		return 1;
	}
    f[0] = 1; 
    f[1] = 1; 
  
    for(i = 2; i <= n; i++) 
    { 
       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
}

int main(){
	int n;
	cin>>n;
	cout<<fib(n);
}
