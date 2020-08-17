#include<bits/stdc++.h>
using namespace std;

int main()
{
	double n;
	cin>>n;
	double prop = 0.0;
	for(double i=0;i<n;i++){
		double k;
		cin>>k;
		prop+=k;
	}
	
    cout << fixed << setprecision(12) << prop/n << endl;
	return 0;
}
