#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;

        vector<char> com;

        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
                com.push_back(s[i]);
        }

        com.push_back(s[n-1]);

        vector<int> a(26,-1);

        for(auto i:com)
        {
            if(a[i-65]==1)
            {
                flag=1;
                cout<<"NO\n";
                break;
            }
            a[i-65]=1;
        }

        if(flag==0)
            cout<<"YES\n";
    }
    return 0;
}