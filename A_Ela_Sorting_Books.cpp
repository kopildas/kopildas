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

    lg brk, n,j, t, k,h,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        x=n/k;
        
        
        lg arr[n],count=n;
        
        lg ans=0;
        vector<char>v;
        for (size_t i = 0; i < n; i+=k)
        {
            ah=s[i]-'0';
            am=s[i+1]-'0';
            if(ah>am)
            {
                v.pushback(am-1)
            } 
            else if(ah<am)
            {
                if(am-ah>1)
                {
                    while(am-ah>1)
                    {
                        v.pushback(ah+1)
                        ah++;
                    }
                }
                else
                    v.pushback(ah-1)
            }        
        }
        lg index=0;
        // should be less than 2x
        k=(arr[0]*2)-1;

        for (size_t i = 1; i < n; i++)
        {
            
                if(k<=arr[i])
                {
                    // arr[i]/k is indicate how many cut
                    ans+=(arr[i]/k);
                    // if y is divisible, means ther is no remainder
                    // like 1st I/O so we hv too decrease cut number by 1
                    if (arr[i]%k==0)
                    {
                        ans--;
                    }
                    
                
                }
            
        }
        cout<<ans<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 