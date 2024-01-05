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
        lg one = 0;
        lg cnt=0;
        for ( i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]>1)
            {
                cnt++;
            }
            else if(v[i]==1 )
                one++;
        }
        cnt+=((one/2));
        if(one%2!=0)cnt++;
        cout<<cnt<<endl;
        
        
        
        
            
  
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 