#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,sum=0,ans=0;
        cin>>n;

        int a[n];

        for(int &i:a)
        {
            cin>>i;

            sum+=i;
        }

        if(sum%n==0)
        {
            for(int i:a)
            {
                if(i>(sum/n))
                {
                    ans++;
                }
            }

            cout<<ans<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}