#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int joy=INT_MIN;

    pair<int,int> a[n];

    for(int i=0;i<n;i++)
    {
      cin>>a[i].first>>a[i].second;
    }

    for(int i=0;i<n;i++)
    {
      if(a[i].second>k)
      {
          joy=max(joy,a[i].first-(a[i].second-k));
      }
      else
      {
          joy=max(joy,a[i].first);
      }

      
    }
    cout<<joy<<"\n";

    
    return 0;
}