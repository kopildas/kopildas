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
        cin>>n;
        vector<lg>v(n);
        cin>>v[0];
        lg cnt=0;
        for ( i = 1; i < n; i++)
        {
            cin>>v[i];
            if(v[i-1]%2 == v[i]%2)
            {
                cnt++;
                v[i-1]=v[i]*v[i-1];
            }
        }
        
        cout<<cnt<<endl;
        
        
        
        
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 