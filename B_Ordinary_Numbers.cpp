#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int ans=0;
        long long n;
        cin>>n;

        for(int i=1;i<=n;i=i*10+1)
        {
            for(int j=1;j<=9;j++)
            {
                if(i*j<=n)
                    ans++;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}