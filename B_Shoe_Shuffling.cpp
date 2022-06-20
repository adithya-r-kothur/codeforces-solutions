#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


int main()
{


int t;
cin>>t;


while(t--)
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
  {
     cin>>a[i];
  }

  vector<long long> p(n);

  for(int i=0;i<n;i++)
  {
      p[i]=i+1;
  }

    ll l=0,r=0;
    bool ans=true;
  while(r<n)
  {
      while(r<n-1 && a[r]==a[r+1])
        ++r;
          if(l==r)
          {
              ans=false;
          }
          else
          {
              rotate(p.begin()+l,p.begin()+r,p.begin()+r+1);
          }
              l=r+1;
              ++r;
      
  }

if(ans)
{
    for(auto &x:p)
    {
        cout<<x<<" ";
    }
        cout<<"\n";
    
}
else
{
    cout<<-1<<"\n";
}



}
return 0;
}