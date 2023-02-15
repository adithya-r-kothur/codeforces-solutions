#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long  a,b;
        cin>>a>>b;

        if(b==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<a*b<<" "<<a<<" "<<(b+1)*a<<"\n";
        }
    }
    return 0;
}