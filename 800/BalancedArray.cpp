#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
	int n;
	cin>>n;
	if(n/2 & 1){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES\n";
		int val[]={2,4,1,5};
		int arr[n];
		int i,j;
		for(i=0,j=n/2; i< (n/2);i++,j++){
			arr[i++]=val[0];
			arr[i] = val[1];
			arr[j++]=val[2];
			arr[j]=val[3];
			for(int id=0;id<4;++id){
				val[id]+=6;
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<' ';
		}
		cout<<endl;
	}	
	}
	return 0;
}
