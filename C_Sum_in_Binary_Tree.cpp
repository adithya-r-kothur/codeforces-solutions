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


int main()
{


int t;
cin>>t;


while(t--)
{
  ll n,ans=0;
  cin>>n;

    ans+=n;
  while(n>0)
  {
    ans += n/2;
    n=n/2;
    // cout<<ans<<"\n";
  }

  cout<<ans<<"\n";


}
return 0;
}