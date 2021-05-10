#include<bits/stdc++.h>
using namespace std;


long long int exponentMod(long long int A,long long int B,long long int C) 
{ 
	// Base cases 
	if (A == 0) 
		return 0; 
	if (B == 0) 
		return 1; 

	// If B is even 
	long long int y; 
	if (B % 2 == 0) { 
		y = exponentMod(A, B / 2, C); 
		y = (y * y) % C; 
	} 

	// If B is odd 
	else { 
		y = A % C; 
		y = (y * exponentMod(A, B - 1, C) % C) % C; 
	} 

	return ((y + C) % C); 
} 

long long int solve(vector<vector<int> > a){
	long long int oddeve = 0;
	long long int eve = 0;
	long long int odd = 0;

	for(int i=0;i<a.size();i++){
		if(a[i][0]%2==0 && a[i][1]%2==0){
			eve++;
		}
		else if(a[i][0]%2==1 && a[i][1]%2==1){
			odd++;
		}
		else{
			oddeve++;
		}
	}
	int n = a.size();

	if(oddeve == 0 && odd%2 == 0){
		return 0;
	}
	else if(oddeve==0 && odd%2 == 1){
		return exponentMod(2,n,1000000007);
	}

	return exponentMod(2,n,1000000007);

}


int main () {
	int pairs;
	cin>>pairs;
	vector<vector<int> > a;
	for(int i=0;i<pairs;i++){
		vector<int> c;
		int x,y;
		cin>>x>>y;
		c.push_back(x);
		c.push_back(y);
		a.push_back(c);
	}

	cout<<solve(a)<<endl;
	return 0;
}
