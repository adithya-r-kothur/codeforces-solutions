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
  string a,b,c;
  cin>>a>>b>>c;

  int n=a.size();
  int m=b.size();
  int o=c.size();

  if(n+m!=o)
  {
    cout<<"NO\n";
  }
  else
  {
    sort(c.begin(),c.end());
    a=a+b;
    sort(a.begin(),a.end());

    if(a==c)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
  }
  return 0;
}