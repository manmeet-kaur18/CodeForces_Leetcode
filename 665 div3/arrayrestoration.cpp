#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int arr[a] = {0};
		
		if(a==2){
		    arr[0]=b;
		    arr[1]=c;
		}
		else{
		    int i=1;
		    int max = INT_MAX;
		    while(i< a){
//		    	cout<<"a"<<a<<endl;
//		    	cout<<"i"<<i<<endl;
		        int bmax = 0;
		        int barr[a] = {0};
		        if((c-b)%i == 0){
		        	int d = (c-b)/i;
		        	int k = b;
			        barr[0] = b;
			        int j=1;
//			        cout<<"d"<<d<<endl;
			        while( (k+d) <= c){
			            if(k+d > bmax){
			                bmax = k+d;
			            }
			            barr[j]=k+d;
			            
			            k=k+d;
			            j++;
			        }
			        
			        k = b;
			        if(j < a){
			            while( (k-d) >= 1){
			                barr[j] = k-d;
			                k=k-d;
			                j++;
			            }
			        }
			        
			        k=c;
			        while(j < a){
				          if(k+d > bmax){
				            bmax = k+d;
				          }
				          barr[j] = k+d;
				          k=k+d;
				          j++;
			        }
			        
			        
			        if(bmax < max){
			            max = bmax;
			            for(int n=0;n<a;n++){
	                        arr[n]= barr[n];
	                    }
			        }
				}
		        i++;
		    }
        }
        
        for(int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
