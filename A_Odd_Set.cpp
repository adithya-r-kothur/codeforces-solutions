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

        int a[2*n],odd=0;

        for(auto &i:a)
        {
            cin>>i;
            if(i%2!=0)
                odd++;
        }

        if(odd==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";    


    }
    return 0;
}