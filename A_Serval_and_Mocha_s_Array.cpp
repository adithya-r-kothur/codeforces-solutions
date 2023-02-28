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
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

int flag=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(__gcd(a[i],a[j])<=2)
        flag=1;
    }
  }

  if(flag)
  {
    cout<<"Yes\n";
  }
  else
  {
    cout<<"No\n";
  }


}
return 0;
}