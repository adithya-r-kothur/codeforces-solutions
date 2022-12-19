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
  int n,m;
  int amax=-100,bmax=-100;
  cin>>n;
  int alice[n];
  for(int i=0;i<n;i++)
  {
    cin>>alice[i];
    if(amax<alice[i])
    {
        amax=alice[i];
    }
  }
  cin>>m;
  int bob[m];
  for(int i=0;i<m;i++)
  {
    cin>>bob[i];
    if(bmax<bob[i])
    {
        bmax=bob[i];
    }

  }

  if(amax>bmax)
  {
    cout<<"Alice\n";
    cout<<"Alice\n";
  }
  else if(bmax==amax)
  {
    cout<<"Alice\n";
    cout<<"Bob\n";
  }
  else
  {
    cout<<"Bob\n";
    cout<<"Bob\n";
  }


}
return 0;
}