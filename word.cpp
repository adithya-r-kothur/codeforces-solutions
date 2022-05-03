#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    cin>>s;

    int n=s.size();
    int ups=0 ,lows=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]>96)
        {
            lows++;;
        }
        if(s[i]<91)
        {
            ups++;
        }
    }

    //cout<<ups<<" "<<lows;
    if(ups>lows)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]>96)
            {
                s[i]-=32;
            }
            
        }
    }
    else if(lows>=ups)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]<91)
            {
                s[i]+=32;
            }
            
        }
    }
   

    cout<<s<<"\n";
    return 0;
}