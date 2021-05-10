#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,q;
    cin>>n>>q;
    
    while(t>0){
    	
        int m;
        vector<int> v;
        std::cout<<1<<" "<<2<<" "<<3<<endl;
        std::cin>>m;
        
        for(int i=1;i<=3;i++){
            if(i!=m){
                v.push_back(i);
            }
        }
        
        v.insert(v.begin()+1,m);
        
        for(int i=4;i<=n;i++){
        	
			int flag1 = -1;
            int flag2 = -1;
              
            for(int j=0;j<v.size();j++){
                if(v[j]==i-1){
                    flag1 = j;
            	}
            	if(v[j]==i-2){
                  flag2 = j;
            	}
        	}
        	
            std::cout<<i<<" "<<i-1<<" "<<i-2<<endl;
            cin>>m;
            
            if(m == i){
            	if(flag1 < flag2){
                	v.insert(v.begin()+flag2,i);
            	}
            	else{
            		v.insert(v.begin()+flag1,i);
				}
            }
			else if(m==i-2){
                if(flag1 < flag2){
                    v.insert(v.begin()+flag2,i);
                    int temp = v[flag2+1];
                    v[flag2+1] = v[flag2];
                    v[flag2]=temp;
                }
                else{
                    v.insert(v.begin()+flag2,i);
                }
            }
            else if( m == i-1){
                if(flag1 < flag2){
                    v.insert(v.begin()+flag1,i);
                }
                else{
                    v.insert(v.begin()+flag1,i);
                    int temp = v[flag1+1];
                    v[flag1+1] = v[flag1];
                    v[flag1]=temp;
                }
            }
        }
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
		int ans;
        std::cin>>ans;
        
        t-=1;
    }
    return 0;
}
