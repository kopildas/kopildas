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
    
        cin>>n;
        while (n--)
        {
            cin>>k;
            string s;
            cin>>s;
            ah=s[0]-'0';
            
            for ( i = 1; i < k; i++)
                {
                    am=s[i]-'0';
                    if(ah<am)ah=am;
                }
            
            cout<<ah-48<<endl;
                         
            

        }
        
        
       
        
        
           
       

    return 0;
} 