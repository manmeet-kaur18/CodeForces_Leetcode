#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i< n;i++){
		int y;
		cin>>y;
		map<char,int> m;
		for(int k=0;k<y;k++){	
			string s;
			cin>>s;
			for(int j=0;j<s.length();j++){
				if(m.find(s[j]) == m.end()){	
					m[s[j]]=1;
				}
				else{
					m[s[j]]+=1;
				}
			}
		}
		int flag = 0;		
		map<char,int>::iterator itr;
		for(itr=m.begin();itr!=m.end();itr++){
		
			if((itr->second % y) != 0){
				v.push_back("NO");
				flag = 1;
				break;
			}
		}
			
		if(flag == 0){
			v.push_back("YES");
		}	
	}
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
