#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve()
{
  int flag=0;
  string a,b,ans="";
  cin>>a>>b;

  int n=a.size(),m=b.size();
  if(a[0]==b[0])
  {
    cout<<"YES\n";
    cout<<a[0]<<"*\n";
  }
  else if(a[n-1]==b[m-1])
  {
    cout<<"YES\n";
    cout<<"*"<<a[n-1]<<"\n";
  }
  else
  {
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<m-1;j++)
      {
        if(a[i]==b[j] && a[i+1]==b[j+1])
        {
          flag=1;
          ans+=a[i];
          ans+=a[i+1];
          break;

        }
      }
      if(flag)
        break;
    }
    if(flag)
    {
      cout<<"YES\n";
      cout<<"*"<<ans<<"*"<<"\n";
    }
    else
      cout<<"NO\n";  

  }
}

int main()
{


int t;
cin>>t;


while(t--)
{
  


solve();

}
return 0;
}