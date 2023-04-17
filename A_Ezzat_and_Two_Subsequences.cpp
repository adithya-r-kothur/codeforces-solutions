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

        int a[n];

        int maxi = INT_MIN;
        long long sum=0;
        for(auto &i : a)
        {
            cin>>i;
            if(i>maxi)
                maxi=i;
            sum+=i;    
        }

        double ans  =1.000*(sum-maxi)/float(n-1)+maxi;

        cout<<fixed<<setprecision(9)<<ans<<"\n";




    }
    return 0;
}

