#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<map>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    
	    
	#ifndef ONLINE_JUDGE
	freopen("a(1).txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

    int ds,V,ns,nc,bonus;
    cin>>ds>>V>>ns>>nc>>bonus;
    
    vector<vector<int> > adj[V];
    
    map<string,pair<int,int> > m;
    map<int,string> m1;
    
    //counter for streets name unique id
    int counter = 0;
    
    while(ns--){
        int u,v,t;
        string s;
        
        cin>>u>>v>>s>>t;
        
        vector<int> c;
        c.push_back(counter);
        m[s]= make_pair(counter,v);
        
        m1[counter] = s;
        c.push_back(v);
        c.push_back(t);
        
        counter++;
        adj[u].push_back(c);
    }
    
    // graph print
    // for(int i=0;i<V;i++){
        
    //     cout<<"vertex no "<<i<<endl;
    //     for(auto x:adj[i]){
    //         cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    //     }
        
    // }
    
    vector<vector<int> > paths;
    set<int> se;
    
    for(int i=0;i<nc;i++){
        int np;
        cin>>np;
        vector<int> c;
        for(int j=0;j<np;j++){
            string s;
            cin>>s;
            c.push_back(m[s].first);
            if(j < np-1){
                // cout<<m[s].second<<" ";
                se.insert(m[s].second);
            }
        }
        paths.push_back(c);
    }
    
    //paths print
    // for(int i=0;i<paths.size();i++){
    //     cout<<"car : "<<i<<endl;
    //     for(int j=0;j<paths[i].size();j++){
    //         cout<<m1[paths[i][j]]<<"->";
    //     }
    //     cout<<endl;
    // }
	
	int poscars[nc];
	for(int i=0;i<nc;i++){
	    poscars[i] = m[m1[paths[i][0]]].second;
	}
	
	int degree[V];
	memset(degree,0,sizeof(degree));
	int minlengthdegree[V];
	memset(minlengthdegree,INT_MAX,sizeof(minlengthdegree));
	
	for(int i=0;i<V;i++)
	{
		minlengthdegree[i] = INT_MAX;
	}

	for(int i=0;i<V;i++){
	    for(int j = 0;j<adj[i].size();j++){
	    	vector<int> x = adj[i][j];
	    	// cout<<i<<" "<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
	    	// cout<<minlengthdegree[x[1]]<<endl;
	        minlengthdegree[x[1]] = min(minlengthdegree[x[1]],x[2]);
	        degree[x[1]]++;
	    }
	}

	// cout<<"minimum degree"<<endl;
	// for(int i=0;i<V;i++){
	// 	cout<<minlengthdegree[i]<<endl;
	// }

	int intersections = 0;
	
	for(int i=0;i<V;i++){
	    if(degree[i]>1 || (degree[i]<=1 && se.find(i)!=se.end())){
	        intersections++;
	    }
	}
	cout<<intersections<<endl;
	
    for(int i=0;i<V;i++){
        
        if(degree[i]>1){
            cout<<i<<" "<<endl;
            int y=0;
            map<string, pair<int,int> >::iterator itr;

		    for (itr = m.begin(); itr != m.end(); ++itr) { 
		       if(itr->second.second == i){
                    y++;
                }
		    } 
            cout<<y<<endl;
            
            map<string, pair<int,int> >::iterator itr1;

		    for (itr1 = m.begin(); itr1 != m.end(); ++itr1) { 
		       if(itr1->second.second == i){

                    cout<<itr1->first<<" "<<minlengthdegree[i]<<endl;
                }
		    }
            
        }
        else if( se.find(i) != se.end()){
            cout<<i<<" "<<endl;
            int y=0;

            map<string, pair<int,int> >::iterator itr;

		    for (itr = m.begin(); itr != m.end(); ++itr) { 
		       if(itr->second.second == i){
                    y++;
                }
		    } 
            cout<<y<<endl;
            
            map<string, pair<int,int> >::iterator itr1;
		    for (itr1 = m.begin(); itr1 != m.end(); ++itr1) { 
		       if(itr1->second.second == i){
                    cout<<itr1->first<<" "<<2<<endl;
                }
		    }
        }
        
    }	
    
    
	
	return 0;
}
