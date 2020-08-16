#include<bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string data;
	cin>>data;
	transform(data.begin(), data.begin()+1, data.begin(),::toupper);
	cout<<data;
	return 0; 
}
