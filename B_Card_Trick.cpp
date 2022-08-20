#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL
lg ar[N],ar2[N];

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
        cin>>m;
        
        for(lg i=0;i<m;i++)
        {
            cin>>ar2[i];
        }
        lg i=0,j=0;
        while(m--){
            i=(i+ar2[j])%n;
            j++;
        }
        
        cout<<ar[i]<<endl;
        
        

       
    }

    return 0;
}