#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,x,y;

        cin>>a>>b>>c>>x>>y;
       
        if(x<=a && y<=b)
        {
            cout<<"YES\n";
            continue;
        }

        x=x-a;
        y=y-b;

        if(x<0)
        {
            if(y<=c)
            {
                cout<<"YES\n";
                continue;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }

        if(y<0)
        {
            if(x<=c)
            {
                cout<<"YES\n";
                continue;
            }
             else
            {
                cout<<"NO\n";
                continue;
            }
        }

        if(c>=(x+y))
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            cout<<"NO\n";
        }

        
    }
    return 0;
}