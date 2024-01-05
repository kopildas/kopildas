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
        string s;
        cin>>s;
        
        
    
        lg one=0,zro=0,maxo=0,maxz=0;
        bool ok=false;
        for (i = 0; i < n-1; i++)
            if (s[i]!=s[i+1])
            {
                ok=true;
                break;
            }
        if (!ok)
        {
            cout<<-1<<endl;
        }
        else
        for (i = 0; i < n-1; i++)
        {
            if (s[i]=='R' and s[i+1]=='L')
            {
                 cout<<0<<endl;
                break;
            }
            else if(s[i]=='L' and s[i+1]=='R')
            {     
                cout<<i+1<<endl;
                break;
            }
             
            
        }
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 