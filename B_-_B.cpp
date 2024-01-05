#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    int brk, n, t, k,h,m,ah,am,a,b;
    
    scanf("%d",&t);
    vector<lg>v;
    vector<lg>v2;
    for (lg i = 0; i < t; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for (lg i = 0; i < t; i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    lg cnt=0,sum=0,sum2=0;
    for (lg i = 0; i < t; i++)
    {
        sum+=v[i];
        sum2+=v2[i];
        if(sum==sum2)cnt=i+1;
        
    }
        
        
    
    cout<<cnt;       
             
    

    return 0;
}