#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        map<int,int> m;
        
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            m[ele]+=1;
        }
        
        int count = 0;
        map<int,int>::iterator itr;
        
        for(itr=m.begin();itr!=m.end();itr++){
            
            if(itr->first/2 < itr->second){
                count = count + itr->first/2;
            }
            else{
                count = count + itr->second;
            }
            
        }
        
        cout<<count<<endl;
    }
	return 0;
}

