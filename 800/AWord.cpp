#include<bits/stdc++.h>
#include<cctype>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	int countu=0;
	int countl=0;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])){
			countu++;
		}
		else{
			countl++;
		}
	}	
	if(countu>countl){
		transform(s.begin(), s.end(), s.begin(), ::toupper); 
	}
	else if(countl>countu){
		transform(s.begin(), s.end(), s.begin(), ::tolower); 
	}
	else{
		transform(s.begin(), s.end(), s.begin(), ::tolower); 
	}
	cout<<s;
	return 0;
}
