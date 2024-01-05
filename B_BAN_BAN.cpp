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
        lg len=n*3;
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else
        {
            lg mid =1+len;
            mid/=2;
            
            if(mid%3!=0)
            {
                mid++;
                mid/=3;
            }
            else
                mid/=3;
            cout<<mid<<endl;
            a=2;
            b=len;
            for (i = 1; i <=mid ; i++)
            {
                cout<<a<<" "<<b<<endl;
                a+=3;
                b-=3;
            }
            
        }
        

        
            
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 