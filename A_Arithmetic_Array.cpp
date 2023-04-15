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

        int sum=0;
        for(auto &i:a)
        {
            cin>>i;
            sum+=i;
        }

        if(sum>0 && sum>=n)
            cout<<sum-n<<"\n";
        else
        {
            cout<<1<<"\n";
        }    


    }
    return 0;
}