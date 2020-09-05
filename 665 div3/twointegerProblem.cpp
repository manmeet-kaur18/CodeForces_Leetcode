#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long count;
		if(a>b){
			if((a-b)%10 != 0){
				count = ((a-b)/ 10) + 1;
			}
			else{
				count = ((a-b)/ 10);
			}
		}
		else{
			if((b-a) % 10 != 0){
				count = ((b-a)/ 10) + 1;
			}
			else{
				count = ((b-a)/ 10);
			}
		}
		cout<<count;
		cout<<endl;
	}

	return 0;
}
