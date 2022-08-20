#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N],k;
vector<int>vec[N];
bool visited[N];

void dfs(int vertex){
    // Take action on vertex
    // after entering the vertex
    visited[vertex]=true;
    //cout<<vertex<<endl;
    for(int child : vec[vertex])
    {
        // Take action on child 
        // before entering the child node
    //cout<<"pere "<<vertex<<", child "<<child<<endl;
        if(visited[child]) continue;
        

        dfs(child);
        k++;
        // Take action on child 
        // after exiting child node

    }
    // Take action on vertex 
    // before axiting the vertex

}


int main()
{
    lg brk, n, t,h,m,ah,am,v,e;
    cin >>n>>m;
    for (size_t i = 0; i < m; i++)
    {
        cin>>v>>e;
        vec[v].push_back(e);
        vec[e].push_back(v);
    }
    k=1;
    if(n==1)
        cout<<"YES"<<endl;
    else if(m!=(n-1))
        cout<<"NO"<<endl;
    else{

        dfs(1);
        
        if(k==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    

    return 0;
}