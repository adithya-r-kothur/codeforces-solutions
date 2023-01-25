#include<bits/stdc++.h>

using namespace std;

bool checkint(double n)
{
    int res = n/1;
    if(n<=0 || n>=0 && res*1==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int m;
    cin>>m;
    double b[m];
    for(int i=0;i<m;i++)
    {
      cin>>b[i];
    }

    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            double temp = b[j]/a[i];
            
            //cout<<temp<<" ";
            if(checkint(temp))
            {
                // cout<<i<<" "<<j<<" "<<"check\n";
                ans.push_back(temp);
            }
        }
    }

    //ans.push_back(10);
    int l =ans.size(),i=0,count=0;
    sort(ans.begin(),ans.end(),greater<int>());
    
    // for(int j=0;j<l;j++)
    // {
    //     cout<<ans[j]<<" ";
    // }
    while(1)
    {
        if(ans[i]==ans[0])
        {
            count++;
        }
        else
        {
            break;
        }
        i++;    
    }

    cout<<count<<"\n";
    return 0;
}