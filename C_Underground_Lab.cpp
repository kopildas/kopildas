#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];
vector<int>vec[N];
bool visited[N];
int cat[N],notok=0,lff=0,m;

void dfs(int vertex, int cont){
    // Take action on vertex
    // after entering the vertex
    visited[vertex]=true;
   
    bool leaf = true;
    
    for(int child : vec[vertex])
    {
        // Take action on child 
        // before entering the child k boy Kopil 
        if(visited[child]) continue;
        else
        {
            dfs(child,cont);
            leaf=false;
        }

        
        //cont=0;
    
        // after exiting child node

    }
    if(leaf)lff++;
    // Take action on vertex 
    // before axiting the vertex

}


int main()
{
    lg brk, n, t, k,h,ah,am,v,e;
   
    cin >>n>>m>>k;

     brk=((2*n)/k)+1;
    
    for (size_t i = 0; i < n-1; i++)
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
    dfs(1,v[0][0]);
    
    cout<<lff;
    

    return 0;
}