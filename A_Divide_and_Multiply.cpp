#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

const lg N = 10000000; // BIG LOOOOOOOOOL 7

lg one[N];
lg odd[N];

int main()
{
    lg brk, n, t, k,l1,l2,r1,r2;
    cin >> t;
    while (t--)
    {
        lg m;
        cin>>n;
        lg ar[n];
        lg ans=0;
        for(lg i=0;i<n;i++)
        {
            cin>>ar[i];
            k=ar[i]/2;
            
            if((k%2==0 or k==1) and ar[i]%2==0){
                ans+=k;
                ar[i]=1;
            }
        }
        lg mx=*max_element(ar, ar + n);
        ans=mx*(pow(2,ans));
        for (size_t i = 0; i < n; i++)
        {
            if(ar[i]!=mx)ans+=ar[i];
            
        }
        
        
        
        
        cout<<ans<<endl;
        
        

       
    }

    return 0;
}