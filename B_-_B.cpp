#include <bits/stdc++.h>
using namespace std;

typedef long long lg;

//const lg N = 10000000; // BIG LOOOOOOOOOL 7
// lg ar[N];

int main()
{
    int brk, n, t, k,h,m,ah,am,a,b;
    
    scanf("%d",&t);
    getc(stdin);
    int ca=1;
    while (t--)
    {
       getc(stdin);
        
        int q;
        scanf("%d %d",&n,&q);

        int ar[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>ar[i];
            scanf("%d",&ar[i]);
        }
        printf("Case %d:\n",ca);

        ca++;
        while (q--)
        {
            int i,j;
            scanf("%d %d",&i,&j);
            
            i=i-1;
            j=j-1;
                int mn=0;
                for (k = i; k <= j; k++)
                    if (ar[k] < ar[mn])
                        mn = k;
                    
            printf("%d\n",ar[mn]);
            
            
        }
        
        

        
             
    }

    return 0;
}