#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
 
    int count=0,ans=0;
 
   int x[n],y[n];
 
    for(int i=0;i<n;i++)
    {
      cin>>x[i]>>y[i];
    }
 
   // sort(a,a+n);
 
    for(int i=0;i<n;i++)
    {
        count=15;
      for(int j=0;j<n;j++)
      {
        if(x[i]== x[j])
        {
            if(y[i]>y[j])
            {
                count&=(15-1);
            }
            if(y[i]<y[j])
            {
                count&=(15-2);
            }
        }
 
        if(y[i]==y[j])
        {
            if(x[i]>x[j])
            {
                count&=(15-4);
            }
 
            if(x[i]<x[j])
            {
                count&=(15-8);
            }
        }
      }
      if(count==0)
      {
          ans++;
      }
    }
 
    cout<<ans;
 
    return 0;
}