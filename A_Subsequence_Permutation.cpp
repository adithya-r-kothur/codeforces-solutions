#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k=0;
        cin>>n;

        string s,a;
        cin>>s;
        a =s;
        

        sort(s.begin(),s.end());

        for(int i=0;i<n;i++)
        {
            if(s[i]!=a[i])
                k++;
        }

        cout<<k<<"\n";
    }
    return 0;
}