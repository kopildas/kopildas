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
        ah=0;
        am=0;
        for ( i = 0; i <n; i++)
        { 
            cin>>k;
            if(k<0)
                ah+=abs(k);
            else
                am+=k;

        }
        

        
            cout<<abs(ah-am)<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 