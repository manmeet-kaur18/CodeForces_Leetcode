#include<bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string data;
	string data1;
	cin>>data>>data1;
	transform(data.begin(), data.end(), data.begin(), ::tolower); 
    transform(data1.begin(), data1.end(), data1.begin(), ::tolower); 
    
    
    if(data>data1){
    	cout<<"1";
	}
	else if(ada<data1){
		cout<<"-1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
