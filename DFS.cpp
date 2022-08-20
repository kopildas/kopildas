#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];
vector<int>vec[N];
bool visited[N];

void dfs(int vertex){
    // Take action on vertex
    // after entering the vertex
    visited[vertex]=true;
    cout<<vertex<<endl;
    for(int child : vec[vertex])
    {
        // Take action on child 
        // before entering the child node
    cout<<"pere "<<vertex<<", child "<<child<<endl;
        if(visited[child]) continue;
        

        dfs(child);
        // Take action on child 
        // after exiting child node

    }
    // Take action on vertex 
    // before axiting the vertex

}


int main()
{
    lg brk, n, t, k,h,m,ah,am,v,e;
    cin >>n>>m;
    for (size_t i = 0; i < m; i++)
    {
        cin>>v>>e;
        vec[v].push_back(e);
        vec[e].push_back(v);
    }
    k=1;
    // for (size_t i : vec[v])
    // {
    //     for (size_t j = 0; j < vec[i].size(); j++)
    //     {
    //         cout<<i<<" "<<vec[i][j]<<endl;
    //     }
        
    // }
    dfs(1);
    
    
    

    return 0;
}