// “Ayo, these ain’t lookin like shooting stars”
// 
//                                    -Dinosaurs


#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    bool flag=true;

    lg brk, n,j, t, k,h,m,ah,am,a,b,c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        vector<lg>v,v2,v3,v4;
        ah=0;
        bool mns=false;
        for (lg i = 0; i < a; i++)
        {
            cin>>k;
            v.push_back(k);
            if(k==-1)
                mns=true;
        }
        bool flg=false;
        for (lg i = 0; i < a-1; i++)
        {
            if(v[i]==-1 and v[i+1]==-1)
                {
                    v[i]=1;
                    v[i+1]=1;
                    flg=true;
                    break;
                }
            
        }
        if(!flg and !mns)
        {
            v[0]*=-1;
            v[1]*=-1;
        }
        lg ans=0;
        for (lg i = 0; i < a; i++)
        {
            ans+=v[i];
        }
        
        
        cout<<ans<<endl;

        
        

        
        
        
    }
    
    
        
        
       

    return 0;
}