#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[4];

        for(auto &i:a)
        {
            cin>>i;
        }

        int f,s ;

        a[0]>a[1]?f=a[0]:f=a[1];
        a[2]>a[3]?s=a[2]:s=a[3];

        // cout<<f<<" "<<s<<"\n";

        sort(a,a+4,greater<int>());

        if((f==a[0] || f==a[1]) && (s==a[0] || s==a[1]))
            cout<<"YES\n";
        else
            cout<<"NO\n";    
        

    }
    return 0;
}