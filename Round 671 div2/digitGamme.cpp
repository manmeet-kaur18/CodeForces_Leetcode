#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int razeeve = 0;
		int razeodd = 0;
		int breecheve = 0;
		int breechodd = 0;
		
		for(int i=0;i<n;i++){
			if(i%2 == 0){
				if(a[i]%2 == 0){
					razeeve += 1;
				}
				else{
					razeodd += 1;
				}
			}
			else{
				if(a[i]%2 == 0){
					breecheve += 1;
				}
				else{
					breechodd += 1;
				}	
			}
		}
		
		if(n%2 == 0){
			if(breecheve > 0){
				cout<<2<<endl;
			}
			else{
				cout<<1<<endl;
			}
		}
		else{
			if(razeodd > 0){
				cout<<1<<endl;
			}
			else{
				cout<<2<<endl;
			}
		}
	}
	return 0;
}
