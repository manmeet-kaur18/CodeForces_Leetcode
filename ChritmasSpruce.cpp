#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    long n; 
	cin>>n;
    vector<vector<long> > g(n + 1);
    for(long p = 2; p <= n; p++){
		long x; 
		cin>>x; 
		g[x].push_back(p);
	}
    bool spruce(true);
    for(long p = 1; p <= n; p++){
        if(g[p].size() == 0){
			continue;
		}
        long cnt=0;
        for(long u = 0; u < g[p].size(); u++){
			cnt += (g[g[p][u]].size() == 0);
		}
        if(cnt < 3){
			spruce = false; 
			break;
		}
    }

    puts(spruce ? "Yes" : "No");

    return 0;
}
