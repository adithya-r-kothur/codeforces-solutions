#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        set<int> s;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          s.insert(a[i]);
        }
        if(s.size()==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            sort(a,a+n,greater<int>());
            cout<<a[0]<<" "<<a[n-1]<<" "<<flush;
            for(int i=1;i<n-1;i++)
            {
              cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}