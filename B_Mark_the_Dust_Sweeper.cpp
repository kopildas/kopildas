#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7
lg ar[N];

int main()
{
    lg brk, n, t, k,l1,l2,r1,r2;
    cin >> t;
    while (t--)
    {
        lg m;
        cin>>n;
        
        for(lg i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        lg flag=0,ans=0;
        
        for(lg i=0;i<n-1;i++)
        {
            if(ar[i]>0)
            {
                flag=1;
                ans+=ar[i];
            }
            else if(ar[i]==0 and flag==1)
            {
                
                ans+=1;
            }
        }
        
        
        cout<<ans<<endl;
        
        

       
    }

    return 0;
}