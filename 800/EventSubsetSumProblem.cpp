#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int holder = 0;
		vector<int> oddnumbers;
		for(int i=0;i<n;i++){
			int y;
			cin>>y;
			if(y%2==0){
				holder = i+1;
			}
			else{
				oddnumbers.push_back(i+1);
			}
		}
		if(holder!=0){
			cout<<1<<endl<<holder<<endl;
		}
		else if(oddnumbers.size() > 1){
			cout<<2<<endl<<oddnumbers[0]<<" "<<oddnumbers[1]<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}
}
