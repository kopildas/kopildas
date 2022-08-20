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
        lg cnt=0;
        for(lg i=0;i<n-1;i++)
        {
            for (lg j = i+1; j < n; j++)
            {
                if(ar[i]==ar[j])
                {
                    cnt++;
                    ar[i]=0;
                    if(ar[i-1]!=0 and i!=0)
                    cnt++;
                    break;
                }
            }
            
        }
        
        
        cout<<cnt<<endl;
        
        

       
    }

    return 0;
}