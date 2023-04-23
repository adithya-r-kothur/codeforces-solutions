#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a,b,c;

        cin>>a>>b>>c;

        int n = 2*abs(b-a);

        if(a>n || b>n || c>n)
        {
            cout<<"-1\n";
        }
        else
        {
            long long d = n/2+c;
            while(d>n) d-=n;
            cout<<d<<"\n";
        }
    }
    return 0;
}