//Manmeet Kaur , 101803095 , COE-6

//TIME COMPLEXITY
// The program has a time complexity of O(n3)

// INPUT
// 20 3
// 3 8 10

// OUTPUT for n=20,k=3 where cuts location is 3,8,10 is 37.

#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main(){
    int i,j,gap,k,l,m,n;
    cin>>n>>k;
    int a[n+1][n+1];
    int b[n+1][n+1];
    
    int cut[k];
    memset(a,0,sizeof(a));
    
    for(i=0;i<k;i++)
        cin >> cut[i];
        
    for(gap=1;gap<=n;gap++){
        for(i=0,j=i+gap;j<=n;j++,i++){
            if(gap==1)
                a[i][j]=0;
            else{
                int min = INT_MAX;
                int mink = INT_MIN;
                for(m=0;m<k;m++){
                    if(cut[m]<j and cut[m] >i){
                        int cost=(j-i)+a[i][cut[m]]+a[cut[m]][j];

                        if(cost<min){
                            min=cost;
                            mink = cut[m];
                        }
                    }
                }
                
                b[i][j] = mink;
                if(min>=INT_MAX)
                	a[i][j]=0;
                else{
                    a[i][j]=min;
				}
            }
        }
    }

    cout << a[0][n] << endl;
    return 0;
}



