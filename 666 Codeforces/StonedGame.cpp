#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<string> v;
	for(int i=0;i<t;i++){
		int y;
		cin>>y;
		int a[y];

		int prev = -1;
		for(int j=0;j<y;j++){
			cin>>a[j];
		}
		int turn = 0;
		while(1){
			int b;
			int prev1 = prev;
			int max = 0;
			for(int i=0;i<y;i++){
				b = (prev1 + 1) % y;
				if(a[b] > 0 && b != prev && a[b]>max){
					max = b;
				}
				prev1 = b;
			}
			b=max;
			if(turn == 0){
				if(b==prev){
					v.push_back("T");
					break;
				}
				if(a[b] == 0){
					v.push_back("T");
					break;
				}
				else{
					a[b]-=1;
				}
			}
			else{
				if(b==prev){
					v.push_back("HL");
					break;
				}
				if(a[b] == 0){
					v.push_back("HL");
					break;
				}
				else{
					a[b]-=1;
				}
			}
			turn = 1-turn;
			prev = b;
		}
	}
	for(int i=0;i<t;i++){
		if(v[i]=="HL"){
			cout<<"T"<<endl;
		}
		else{
			cout<<"HL"<<endl;
		}
	}
	return 0;
}
