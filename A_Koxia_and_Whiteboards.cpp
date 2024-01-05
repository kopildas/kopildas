// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];


int main()
{
    
    bool flag=true;

    lg brk, n,j, t, k,h,i,m,ah,am,a,b,c,x;
    
        cin>>t;
        while (t--)
        {
            lg l,r,k;
            cin>>n>>m;
            vector<lg>v(n+m);
            lg cnt=0;

            for ( i = 0; i < n+m; i++)
                scanf("%lld",&v[i]);

            
            // sort
            sort(v.begin(),v.end()-1);
            reverse(v.begin(),v.end());
            
            
            for ( i = 0; i < n; i++)
                cnt+=v[i];


            cout<<cnt<<endl;
                         
            v.clear();
           
        }
        

         // Lets dance baby 
       

    return 0;
} 