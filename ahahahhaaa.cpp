#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int zeros = 0;
        int ones = 0;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            if(y == 0){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(zeros >= n/2){
            cout<<zeros<<endl;
            for(int i=0;i<zeros;i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else{
            if(ones & 1){
                ones--;
            }
            cout<<ones<<endl;
            for(int i=0;i<ones;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
