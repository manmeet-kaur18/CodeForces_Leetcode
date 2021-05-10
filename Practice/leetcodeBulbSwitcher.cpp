#include<bits/stdc++.h>
using namespace std;

int numTimesAllBlue(vector<int>& light) {
	
        int arr[light.size()] = {0};
        int allonmomentcount = 0;
        for(int k=0;k<light.size();k++){
            
            if( light[k] - 2 > 1 ){
                arr[light[k]-1] = 2;
            }
            
            else{
                arr[light[k]-1] = 1;
                int t = light[k];
				
                while(t<light.size()){

                    if(arr[t] == 0){
                        break;
                    }
                    else if(arr[t] == 1){
                        arr[t] = 2;
                    }
                    t++;
                }
            }
            
            int flag  = 0;
            for(int i=0;i<light.size();i++){

                if(light[i] == 1){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                allonmomentcount++;
            }
        }
        
        return allonmomentcount;
}

int main(){
	vector<int> light;
	int n = 5;
	int arr[] = {2,1,3,5,4};
	for(int i=0;i<n;i++){
		light.push_back(arr[i]);
	}
	cout<<numTimesAllBlue(light);
	return 0;
}
