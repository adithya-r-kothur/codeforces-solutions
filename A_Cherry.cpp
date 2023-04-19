#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        for(auto &i:a)
        {
            cin>>i;
        }

        long long ans=0;
        for(int i=1;i<n;i++)
        {
            ans = max(ans,1LL*a[i]*a[i-1]);
        }

        cout<<ans<<"\n";
    }
    return 0;
}