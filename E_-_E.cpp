#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    lg brk, n,j, t, k,h,m,ah,am,a,b;
    lg i=1;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        lg len =s.size();
        if(len==1)
        {
            cout<<"Case "<<i++<<": "<<"Yes"<<endl;
        }
        else
        {
           
            
                brk=len/2;
                k=brk-1;
                j=brk+1;
                lg fg=1;
                if(len%2==0)
                {
                    k=brk-1;
                    j=brk;
                }
                while(brk--)
                {
                    if((s[k--]!=s[j++]))
                    {
                        cout<<"Case "<<i++<<": "<<"No"<<endl;
                        fg=0;
                        break;
                    }
                }
                if(fg)
                    cout<<"Case "<<i++<<": "<<"Yes"<<endl;
            
            
        }
    
             
    }

    return 0;
}