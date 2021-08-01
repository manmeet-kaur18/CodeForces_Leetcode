#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        
        int n;
        cin>>n;
        vector<int> v(n,0);
        
        int minele = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>v[i];
            minele = min(minele,v[i]);
        }
        
        int ans = 0;
        int flag = 0;
        
        for(int i=0;i<n;i++){
        	if(v[i]==minele){
        		continue;
			}
            int x = v[i]%(v[i]-minele);
            if(x==minele){
                ans+=1;
            }
            else{
                flag=1;
                break;
            }
        }
        
        if(flag){
            ans = 0;
            for(int i=0;i<n;i++){
                if(v[i]!=0){
                    ans+=1;
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}

