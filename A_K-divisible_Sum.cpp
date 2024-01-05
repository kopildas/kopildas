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
        
        for (auto &it : v)
        {
            cin>>it;
            if(it%2==0)ev++;
            else
                odd++;
        }


    //  TRUE means alice and false means bob
        
        if(odd==n)
        {
            x=(odd+1)/2;
            if(x%2==0) // check # odd cz sum of even # odd is eqal to even
                flag=true;
            else       // sum of odd # odd is equal to odd
                flag=false;
        }
        else if(ev==n)
        {
            flag=true;
        }
        else if(odd==ev) // test case 3
        {
            if(ev%2==0) // if even # of ev or odd than bob will win
                flag=false;
            else
                flag=true;
        }
        else if(odd!=ev)
        {
            if(ev%2==0) // 1 3 3 4 4
                flag=false;
            else        // 4 4 2 1 5
                flag=true;
        }
        




        if(flag)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
        
    }
    
    
    
    
    
        
        
       

    return 0;
} 