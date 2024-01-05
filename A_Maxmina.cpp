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
   

    lg brk, n,i,j, t, k,h,m,ah,am,a,b,c,x;
    cin>>t;
    while (t--)
    {
        bool flag;
        
        string a;

        for(i=0;i<8;i++)
            {
                cin>>a;
                for(j=0;j<8;j++)
                {
                    if(a[j]=='B')
                    {
                        flag=false;
                        break;
                    }
                }
                if(j==8){
                    flag=true;
                    break;
                }
            }
        i++;
        if(i<8)
        {
            for(lg k=i;k<8;k++)
                cin>>a;
        }

        if(flag)
            cout<<"R"<<endl;
        else
            cout<<"B"<<endl;

        
    }
    
    
    
    
    
        
        
       

    return 0;
} 