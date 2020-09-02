#include<bits/stdc++.h>
using namespace std;

bool sortf(pair<string,int> a,pair<string,int> b){
	return a.second > b.second;
}
string longestDiverseString(int a, int b, int c) {
        string str="";
        vector<pair<string,int> > v;
        v.push_back(make_pair("a",a));
        v.push_back(make_pair("b",b));
        v.push_back(make_pair("c",c));	 
		sort(v.begin(),v.end(),sortf);
		string prev = "";
        while(v.size()>0){
			if(v[0].first != prev){
        		if(v[0].second >= 2){
	            	str += v[0].first + v[0].first;
	            	v[0].second = v[0].second - 2;
				}
				else if(v[0].second > 0){
					str+=v[0].first;
					v[0].second -= 1;
				}
				pair<string,int> t= make_pair(v[0].first,v[0].second);
				v.erase(v.begin()+0);
				
                if(t.second != 0){
                    v.push_back(t);
                }
				prev = t.first;
			}
			else{
				pair<string,int> t = make_pair(v[0].first,v[0].second);
				v.erase(v.begin()+0);
                if(v.size() == 0){
                    break;
                }
				v.push_back(t);
                if(v[0].first != prev){
                    if(v[0].second >= 2){
	            	str += v[0].first + v[0].first;
	            	v[0].second = v[0].second - 2;
                    }
                    else if(v[0].second > 0){
                        str+=v[0].first;
                        v[0].second -= 1;
                    }
                    t= make_pair(v[0].first,v[0].second);
                    v.erase(v.begin()+0);
                    if(t.second != 0){
                        v.push_back(t);
                    }
                    prev = t.first;	
                }
			}
			sort(v.begin(),v.end(),sortf);
        }
        return str;
    }
int main(){
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	cout<<longestDiverseString(a,b,c);
	return 0;
}
