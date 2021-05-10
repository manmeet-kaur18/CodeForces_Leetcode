#include<bits/stdc++.h>
using namespace std;
//
//int solve(vector<int> &A) {
//    int num = 0;
//    int evesum = 0;
//    int oddsum = 0;
//    for(int i=0;i<A.size();i++){
//        
//        cout<<evesum<<" "<<oddsum<<endl;
//        int nevesum = 0;
//        int noddsum = 0;
//        
//        for(int j=i+1;j<A.size();j++){
//            if(j%2==0){
//                noddsum+=A[j];
//            }    
//            else{
//                nevesum+=A[j];
//            }
//        }
//        
//        cout<<nevesum<<" "<<noddsum<<endl;
//        if(evesum+nevesum == oddsum+noddsum){
//            cout<<evesum<<" "<<oddsum<<" "<<i<<endl;
//            num = i;
//            break;
//        }        
//        if(i%2 == 0){
//            evesum+=A[i];
//        }
//        
//        else{
//            oddsum+= A[i];
//        }
//    }
//    return num;
//}

int solve(vector<int> &A) {
    int num = 0;
    int evesum = 0;
    int oddsum = 0;
    vector<pair<int,int> > v;
    
    int evesum1=0;
    int oddsum1=0;
    
    for(int i=A.size()-1;i>=0;i--){
        if(i%2==0){
            evesum1+=A[i];
        }
        else{
            oddsum1+=A[i];
        }
        v.push_back(make_pair(evesum1,oddsum1));
    }
    
    for(int i=0;i<v.size();i++){
    	cout<<v[i].first<<" "<<v[i].second<<endl;
	}
    
    for(int i=0;i<A.size();i++){
        
        int nevesum = 0;
        int noddsum = 0;
        
        // for(int j=i+1;j<A.size();j++){
        //     if(j%2==0){
        //         noddsum+=A[j];
        //     }    
        //     else{
        //         nevesum+=A[j];
        //     }
        // }
        cout<<evesum<<" "<<v[i+1].second<< " "<<oddsum<<" "<<v[i+1].first<<endl;
        
        if((evesum+v[i+1].second) == (oddsum+v[i+1].first)){
            num++;
        }        
        if(i%2 == 0){
            evesum+=A[i];
        }
        
        else{
            oddsum+= A[i];
        }
    }
    return num;
}


int main(){
	vector<int> A;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		A.push_back(y);
	}
	cout<<solve(A);
	
}
