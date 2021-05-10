#include<bits/stdc++.h>
using namespace std;

vector<vector<int > > spiralMatrixIII(int R, int C, int r, int c) {
        
        vector<vector<int> > v;
        int rangexd = r+1;
        int rangexu = r-1;
        int rangeyr = c+1;
        int rangeyl = c-1;
		
		cout<< rangexd ;
        cout<< rangexu ;
        cout<< rangeyr;
        cout<< rangeyl;
        int l = r;
        int m = c;
        while(v.size() != R*C){
            
            while(m <= rangeyr){
            	
                cout<<l<<" "<<m<<endl;
                if(l<0 || l>=R || m<0 || m>=C){
                    m++;
                    continue;
                }
                vector<int> c;
                c.push_back(l);
                c.push_back(m);
                v.push_back(c);
                m++;
            }

            while(l <= rangexd){
//            	
//				
//                cout<<l<<" "<<m<<endl;
                if(l<0 || l>=R || m<0 || m>=C){
                    l++;
                    continue;
                }
                vector<int> c;
                
                c.push_back(l);
                c.push_back(m);
                v.push_back(c);
                l++;
            }

            while(m >= rangeyl ){
            	
//				
//                cout<<l<<" "<<m<<endl;
                if(l<0 || l>=R || m<0 || m>=C){
                    m--;
                    continue;
                }

                vector<int> c;
                
                c.push_back(l);
                c.push_back(m);
                v.push_back(c);
                m--;
            }

            while(l >= rangexu){
            	
//				
//                cout<<l<<" "<<m<<endl;
                if(l<0 || l>=R || m<0 || m>=C){
                    l--;
                    continue;
                }

                vector<int> c;
                
                c.push_back(l);
                c.push_back(m);
                v.push_back(c);
                l--;
            }

            while(m <= rangeyr){
            	
				
//                cout<<l<<" "<<m<<endl;
                if(l<0 || l>=R || m<0 || m>=C){
                    m++;
                    continue;
                }

                vector<int> c;
                
                c.push_back(l);
                c.push_back(m);
                v.push_back(c);
                m++;
            }

            rangexd ++;
            rangexu --;
            rangeyr ++;
            rangeyl --;

        }
    
        return v;
}

int main(){
	vector<vector<int> > v= spiralMatrixIII(5,6,1,4);
	for(int i=0;i<v.size();i++){
		cout<<v[i][0]<<" , "<<v[i][1]<<endl;
	}
	return 0;
}

