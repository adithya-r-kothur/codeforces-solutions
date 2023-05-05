#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        n=n+1;

        cout<<max(6LL,n)/2*5<<"\n";
    }
    return 0;
}