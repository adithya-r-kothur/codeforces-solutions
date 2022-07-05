#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    

    pair<int,int> mom[n];

    for(int i=0;i<n;i++)
    {
      cin>>mom[i].first>>mom[i].second;
    }

      
        long long ag=1;
        int count=0;
       for(int i=0;i<n;i++)
       {
          while(ag+x<=mom[i].first)
          {
              ag+=x;
          }

          count+=mom[i].second-ag+1;
          ag=mom[i].second+1;
       }

       cout<<count;
    
    return 0;
}