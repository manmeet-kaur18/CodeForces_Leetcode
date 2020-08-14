#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;


int main(){
 	int n;
 	cin>> n;
 	char arr[2*n-2];
 	for(int i=0;i<(2*n-2);i++){
 		char y;
 		cin>>y;
 		arr[i]=y;
 	}
 	int cost = 0;
 	map<char,int> m;
 	for(int i=0;i<(2*n-2);i++){
 		if(i%2 == 0){
 			if(m.find(arr[i])== m.end()){
 				m[arr[i]] = 1;
			}
			else{
				m[arr[i]] += 1;
			}
		}
		else{
			if(m.find(tolower(arr[i])) != m.end()){
				if(m[tolower(arr[i])]==1){
					m.erase(tolower(arr[i]));
				}
				else{
					m[tolower(arr[i])] -= 1;
				}
			}
			else{
				cost+=1;
			}
		}
	 }
	 
	cout<<cost;
	return 0;
}
